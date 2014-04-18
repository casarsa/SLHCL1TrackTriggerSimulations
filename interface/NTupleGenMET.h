#ifndef NTupleTools_NTupleGenMET_h_
#define NTupleTools_NTupleGenMET_h_

#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"

class NTupleGenMET : public edm::EDProducer {
 public:
  explicit NTupleGenMET(const edm::ParameterSet&);

 private:
  void produce( edm::Event &, const edm::EventSetup & );
  const edm::InputTag   inputTag;
  const std::string     prefix,suffix;
};

#endif
