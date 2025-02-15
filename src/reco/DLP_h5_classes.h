
//  WARNING:
//    This file was autogenerated by h5_to_cpp.py.
//    Do not edit by hand!
//    
//    The invocation that generated this file was:
//
//       ./h5_to_cpp.py -f /dune/data/users/skumara/Datafiles_2x2/MLreco_h5files/test_minirun4.h5 -o ../src/reco/DLP_h5_classes -ns cafmaker::types::dlp -d events -cn Event -d interactions -cn Interaction -d particles -cn Particle -d truth_interactions -cn TrueInteraction -d truth_particles -cn TrueParticle -d run_info -cn RunInfo
//


#ifndef CAFMAKER_TYPES_DLP_DLP_H5_CLASSES_H
#define CAFMAKER_TYPES_DLP_DLP_H5_CLASSES_H

#include <array>

#include "H5Cpp.h"
#include "readH5/BufferView.h"

namespace cafmaker::types::dlp
{

  // This generic template will be overloaded
  // for every specific type that we create below
  template <typename T>
  H5::CompType BuildCompType();

  
  enum class Pid : int64_t
  {
    kElectron = 1,
    kKaon = 5,
    kMuon = 2,
    kPhoton = 0,
    kPion = 3,
    kProton = 4,
  };
  
  
  enum class SemanticType : int64_t
  {
    kDelta = 3,
    kGhost = 5,
    kLowEnergy = 4,
    kMichel = 2,
    kShower = 0,
    kTrack = 1,
    kUnknown = 6,
  };
  
  
  enum class NuCurrentType : int64_t
  {
    kCC = 0,
    kNC = 1,
    kUnknownCurrent = -1,
  };
  
  
  enum class NuInteractionMode : int64_t
  {
    kAMNuGamma = 9,
    kCCCOH = 1097,
    kCCDIS = 1091,
    kCCQE = 1001,
    kCCQEHyperon = 1095,
    kCoh = 3,
    kCohElastic = 4,
    kDIS = 2,
    kDiffractive = 11,
    kEM = 12,
    kElectronScattering = 5,
    kGlashowResonance = 8,
    kIMDAnnihilation = 6,
    kInverseBetaDecay = 7,
    kInverseMuDecay = 1099,
    kMEC = 10,
    kMEC2p2h = 1100,
    kNCCOH = 1096,
    kNCDIS = 1092,
    kNCQE = 1002,
    kNuElectronElastic = 1098,
    kNuanceOffset = 1000,
    kQE = 1,
    kResCCNuBarDelta0PiMinus = 1028,
    kResCCNuBarDeltaMinusPiPlus = 1032,
    kResCCNuBarKaon0Lambda0 = 1076,
    kResCCNuBarNeutronEta = 1070,
    kResCCNuBarNeutronPi0Pi0 = 1086,
    kResCCNuBarNeutronPiMinus = 1010,
    kResCCNuBarNeutronPiPlusPiMinus = 1085,
    kResCCNuBarNeutronRho0 = 1048,
    kResCCNuBarNeutronRhoMinus = 1046,
    kResCCNuBarProtonPi0 = 1011,
    kResCCNuBarProtonPi0Pi0 = 1090,
    kResCCNuBarProtonPiMinus = 1012,
    kResCCNuBarSigma0Kaon0 = 1062,
    kResCCNuBarSigmaMinusKaon0 = 1060,
    kResCCNuDelta2PlusPiMinus = 1021,
    kResCCNuDeltaPlusPiPlus = 1017,
    kResCCNuKaonPlusLambda0 = 1073,
    kResCCNuNeutronPi0 = 1004,
    kResCCNuNeutronPiPlus = 1005,
    kResCCNuNeutronRhoPlus = 1041,
    kResCCNuProtonEta = 1067,
    kResCCNuProtonPi0Pi0 = 1080,
    kResCCNuProtonPiPlus = 1003,
    kResCCNuProtonPiPlusPiMinus = 1079,
    kResCCNuProtonRhoPlus = 1039,
    kResCCNuSigmaPlusKaon0 = 1055,
    kResCCNuSigmaPlusKaonPlus = 1053,
    kResNCNuBarNeutronPi0 = 1015,
    kResNCNuBarNeutronPiMinus = 1016,
    kResNCNuBarProtonPi0 = 1013,
    kResNCNuBarProtonPiPlus = 1014,
    kResNCNuNeutronPi0 = 1008,
    kResNCNuNeutronPiMinus = 1009,
    kResNCNuProtonPi0 = 1006,
    kResNCNuProtonPiPlus = 1007,
    kUnUsed1 = 1093,
    kUnUsed2 = 1094,
    kUnknownInteraction = -1,
    kWeakMix = 13,
  };
  
  
  enum class NuInteractionType : int64_t
  {
    kAMNuGamma = 9,
    kCCCOH = 1097,
    kCCDIS = 1091,
    kCCQE = 1001,
    kCCQEHyperon = 1095,
    kCoh = 3,
    kCohElastic = 4,
    kDIS = 2,
    kDiffractive = 11,
    kEM = 12,
    kElectronScattering = 5,
    kGlashowResonance = 8,
    kIMDAnnihilation = 6,
    kInverseBetaDecay = 7,
    kInverseMuDecay = 1099,
    kMEC = 10,
    kMEC2p2h = 1100,
    kNCCOH = 1096,
    kNCDIS = 1092,
    kNCQE = 1002,
    kNuElectronElastic = 1098,
    kNuanceOffset = 1000,
    kQE = 1,
    kResCCNuBarDelta0PiMinus = 1028,
    kResCCNuBarDeltaMinusPiPlus = 1032,
    kResCCNuBarKaon0Lambda0 = 1076,
    kResCCNuBarNeutronEta = 1070,
    kResCCNuBarNeutronPi0Pi0 = 1086,
    kResCCNuBarNeutronPiMinus = 1010,
    kResCCNuBarNeutronPiPlusPiMinus = 1085,
    kResCCNuBarNeutronRho0 = 1048,
    kResCCNuBarNeutronRhoMinus = 1046,
    kResCCNuBarProtonPi0 = 1011,
    kResCCNuBarProtonPi0Pi0 = 1090,
    kResCCNuBarProtonPiMinus = 1012,
    kResCCNuBarSigma0Kaon0 = 1062,
    kResCCNuBarSigmaMinusKaon0 = 1060,
    kResCCNuDelta2PlusPiMinus = 1021,
    kResCCNuDeltaPlusPiPlus = 1017,
    kResCCNuKaonPlusLambda0 = 1073,
    kResCCNuNeutronPi0 = 1004,
    kResCCNuNeutronPiPlus = 1005,
    kResCCNuNeutronRhoPlus = 1041,
    kResCCNuProtonEta = 1067,
    kResCCNuProtonPi0Pi0 = 1080,
    kResCCNuProtonPiPlus = 1003,
    kResCCNuProtonPiPlusPiMinus = 1079,
    kResCCNuProtonRhoPlus = 1039,
    kResCCNuSigmaPlusKaon0 = 1055,
    kResCCNuSigmaPlusKaonPlus = 1053,
    kResNCNuBarNeutronPi0 = 1015,
    kResNCNuBarNeutronPiMinus = 1016,
    kResNCNuBarProtonPi0 = 1013,
    kResNCNuBarProtonPiPlus = 1014,
    kResNCNuNeutronPi0 = 1008,
    kResNCNuNeutronPiMinus = 1009,
    kResNCNuProtonPi0 = 1006,
    kResNCNuProtonPiPlus = 1007,
    kUnUsed1 = 1093,
    kUnUsed2 = 1094,
    kUnknownInteraction = -1,
    kWeakMix = 13,
  };
  
  struct Event;
  struct Interaction;
  struct Particle;
  struct TrueInteraction;
  struct TrueParticle;
  struct RunInfo;
  
  struct Event
  {
    hdset_reg_ref_t run_info;
    hdset_reg_ref_t index;
    hdset_reg_ref_t meta;
    hdset_reg_ref_t truth_particles;
    hdset_reg_ref_t particles;
    hdset_reg_ref_t interactions;
    hdset_reg_ref_t truth_interactions;
    
    void SyncVectors();
    
    template <typename T>
    const hdset_reg_ref_t& GetRef() const
    {
      if constexpr(std::is_same_v<T, RunInfo>) return run_info;
      else if(std::is_same_v<T, TrueParticle>) return truth_particles;
      else if(std::is_same_v<T, Particle>) return particles;
      else if(std::is_same_v<T, Interaction>) return interactions;
      else if(std::is_same_v<T, TrueInteraction>) return truth_interactions;
    }
    
  };
  
  
  struct Interaction
  {
    int64_t crthit_id;
    uint8_t crthit_matched;
    int64_t crthit_matched_particle_id;
    int64_t flash_hypothesis;
    int64_t flash_id;
    double flash_time;
    int64_t flash_total_pE;
    uint8_t fmatched;
    int64_t id;
    int64_t image_id;
    bool is_contained;
    bool is_neutrino;
    bool is_principal_match;
    BufferView<int64_t> match;
    BufferView<float> match_overlap;
    uint8_t matched;
    int64_t nu_id;
    int64_t num_particles;
    int64_t num_primaries;
    std::array<int64_t, 6> particle_counts;
    BufferView<int64_t> particle_ids;
    std::array<int64_t, 6> primary_counts;
    int64_t size;
    char * topology;
    char * units;
    std::array<float, 3> vertex;
    char * vertex_mode;
    int64_t volume_id;
    
    void SyncVectors();
    
    // note: the following 'handle' objects
    // are used internally by HDF5 to keep track
    // of the memory for variable-length buffers.
    // please use the SyncVectors() method
    // after loading data into the object
    // to fill the corresponding BufferView<>s above,
    // and then use those for access to the data.
    
    hvl_t match_handle;
    hvl_t match_overlap_handle;
    hvl_t particle_ids_handle;
  };
  
  
  struct Particle
  {
    double calo_ke;
    double csda_ke;
    double depositions_sum;
    std::array<double, 3> end_dir;
    std::array<double, 3> end_point;
    BufferView<int64_t> fragment_ids;
    int64_t id;
    int64_t image_id;
    BufferView<int64_t> index;
    int64_t interaction_id;
    bool is_contained;
    bool is_primary;
    bool is_principal_match;
    double length;
    BufferView<int64_t> match;
    BufferView<float> match_overlap;
    uint8_t matched;
    double mcs_ke;
    std::array<double, 3> momentum;
    int64_t nu_id;
    int64_t num_fragments;
    int64_t pdg_code;
    Pid pid;
    std::array<float, 5> pid_scores;
    std::array<float, 2> primary_scores;
    SemanticType semantic_type;
    int64_t size;
    std::array<double, 3> start_dir;
    std::array<double, 3> start_point;
    char * units;
    int64_t volume_id;
    
    void SyncVectors();
    
    // note: the following 'handle' objects
    // are used internally by HDF5 to keep track
    // of the memory for variable-length buffers.
    // please use the SyncVectors() method
    // after loading data into the object
    // to fill the corresponding BufferView<>s above,
    // and then use those for access to the data.
    
    hvl_t fragment_ids_handle;
    hvl_t index_handle;
    hvl_t match_handle;
    hvl_t match_overlap_handle;
  };
  
  
  struct TrueInteraction
  {
    int64_t crthit_id;
    uint8_t crthit_matched;
    int64_t crthit_matched_particle_id;
    int64_t flash_hypothesis;
    int64_t flash_id;
    double flash_time;
    int64_t flash_total_pE;
    uint8_t fmatched;
    int64_t id;
    int64_t image_id;
    bool is_contained;
    bool is_neutrino;
    bool is_principal_match;
    BufferView<int64_t> match;
    BufferView<float> match_overlap;
    uint8_t matched;
    NuCurrentType nu_current_type;
    double nu_energy_init;
    int64_t nu_id;
    NuInteractionMode nu_interaction_mode;
    NuInteractionType nu_interaction_type;
    int64_t nu_pdg_code;
    int64_t num_particles;
    int64_t num_primaries;
    std::array<int64_t, 6> particle_counts;
    BufferView<int64_t> particle_ids;
    std::array<int64_t, 6> primary_counts;
    int64_t size;
    char * topology;
    int64_t truth_id;
    BufferView<int64_t> truth_particle_counts;
    BufferView<int64_t> truth_primary_counts;
    char * truth_topology;
    std::array<double, 3> truth_vertex;
    char * units;
    std::array<float, 3> vertex;
    char * vertex_mode;
    int64_t volume_id;
    
    void SyncVectors();
    
    // note: the following 'handle' objects
    // are used internally by HDF5 to keep track
    // of the memory for variable-length buffers.
    // please use the SyncVectors() method
    // after loading data into the object
    // to fill the corresponding BufferView<>s above,
    // and then use those for access to the data.
    
    hvl_t match_handle;
    hvl_t match_overlap_handle;
    hvl_t particle_ids_handle;
    hvl_t truth_particle_counts_handle;
    hvl_t truth_primary_counts_handle;
  };
  
  
  struct TrueParticle
  {
    char * ancestor_creation_process;
    int64_t ancestor_pdg_code;
    BufferView<double> ancestor_position;
    double ancestor_t;
    int64_t ancestor_track_id;
    double calo_ke;
    double calo_ke_tng;
    BufferView<int64_t> children_counts;
    BufferView<double> children_id;
    char * creation_process;
    double csda_ke;
    double csda_ke_tng;
    double depositions_sum;
    BufferView<double> direction;
    double distance_travel;
    std::array<double, 3> end_dir;
    std::array<double, 3> end_point;
    std::array<double, 3> end_position;
    double energy_deposit;
    double energy_init;
    BufferView<double> first_step;
    BufferView<int64_t> fragment_ids;
    int64_t group_id;
    int64_t id;
    int64_t image_id;
    BufferView<int64_t> index;
    int64_t interaction_id;
    bool is_contained;
    bool is_primary;
    bool is_principal_match;
    BufferView<double> last_step;
    double length;
    double length_tng;
    BufferView<int64_t> match;
    BufferView<float> match_overlap;
    uint8_t matched;
    double mcs_ke;
    double mcs_ke_tng;
    int64_t mcst_index;
    int64_t mct_index;
    std::array<double, 3> momentum;
    int64_t nu_id;
    int64_t num_fragments;
    int64_t num_voxels;
    double p;
    char * parent_creation_process;
    int64_t parent_id;
    int64_t parent_pdg_code;
    BufferView<double> parent_position;
    double parent_t;
    int64_t parent_track_id;
    int64_t pdg_code;
    Pid pid;
    BufferView<double> position;
    float sed_depositions_MeV_sum;
    BufferView<int64_t> sed_index;
    int64_t sed_size;
    SemanticType semantic_type;
    int64_t shape;
    int64_t size;
    std::array<double, 3> start_dir;
    std::array<double, 3> start_point;
    double t;
    int64_t track_id;
    float truth_depositions_MeV_sum;
    double truth_depositions_sum;
    BufferView<double> truth_end_dir;
    int64_t truth_id;
    BufferView<int64_t> truth_index;
    int64_t truth_size;
    BufferView<double> truth_start_dir;
    char * units;
    int64_t volume_id;
    
    void SyncVectors();
    
    // note: the following 'handle' objects
    // are used internally by HDF5 to keep track
    // of the memory for variable-length buffers.
    // please use the SyncVectors() method
    // after loading data into the object
    // to fill the corresponding BufferView<>s above,
    // and then use those for access to the data.
    
    hvl_t ancestor_position_handle;
    hvl_t children_counts_handle;
    hvl_t children_id_handle;
    hvl_t direction_handle;
    hvl_t first_step_handle;
    hvl_t fragment_ids_handle;
    hvl_t index_handle;
    hvl_t last_step_handle;
    hvl_t match_handle;
    hvl_t match_overlap_handle;
    hvl_t parent_position_handle;
    hvl_t position_handle;
    hvl_t sed_index_handle;
    hvl_t truth_end_dir_handle;
    hvl_t truth_index_handle;
    hvl_t truth_start_dir_handle;
  };
  
  
  struct RunInfo
  {
    int64_t run;
    int64_t subrun;
    int64_t event;
    
    void SyncVectors();
  };
  
  
  template <>
  H5::CompType BuildCompType<Event>();
  
  
  template <>
  H5::CompType BuildCompType<Interaction>();
  
  
  template <>
  H5::CompType BuildCompType<Particle>();
  
  
  template <>
  H5::CompType BuildCompType<TrueInteraction>();
  
  
  template <>
  H5::CompType BuildCompType<TrueParticle>();
  
  
  template <>
  H5::CompType BuildCompType<RunInfo>();
  

}

#endif // CAFMAKER_TYPES_DLP_DLP_H5_CLASSES_H
