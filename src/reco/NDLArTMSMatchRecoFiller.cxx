#include "NDLArTMSMatchRecoFiller.h"

#include "duneanaobj/StandardRecord/StandardRecord.h"
#include "duneanaobj/StandardRecord/SRNDTrackAssn.h"
#include "MLNDLArRecoBranchFiller.h"
#include "TMSRecoBranchFiller.h"


namespace cafmaker
{
  NDLArTMSMatchRecoFiller::NDLArTMSMatchRecoFiller(const std::string &ndLArFilename,
                                                   const std::string &tmsRecoFilename)
      : fNDLArRecoFiller(std::make_unique<cafmaker::MLNDLArRecoBranchFiller>(ndLArFilename)),
        fTMSRecoFiller(std::make_unique<cafmaker::TMSRecoBranchFiller>(tmsRecoFilename))
  {

  }

  void NDLArTMSMatchRecoFiller::_FillRecoBranches(std::size_t evtIdx,
                                                  caf::StandardRecord &sr,
                                                  const cafmaker::dumpTree &dt,
                                                  const cafmaker::params &par) const
  {

    // first copy the info out of the individual reco branch fillers
    fNDLArRecoFiller->FillRecoBranches(evtIdx, sr, dt, par);
    fTMSRecoFiller->FillRecoBranches(evtIdx, sr, dt, par);

    // now we can match tracks using that info
    MatchTracks(sr);

  }

// -----------------------------------------------------

  void NDLArTMSMatchRecoFiller::MatchTracks(caf::StandardRecord &sr) const
  {
    // actually do track matching here:
    //   compare impact parameters, angles, whatever


    // then, fill in the ndmatch object with the matches.
    // for example (obviously you'd use calculated vaoues, not hard-coded ones...):
    caf::SRNDTrackAssn match;
    match.larid = 4;
    match.tmsid = 3;
    match.transdispl = 1.865; // whatever
    match.angdispl = 8.4;  // whatever

    sr.nd.trkmatch.emplace_back(match);
    sr.nd.ntrkmatch++;
  }

}