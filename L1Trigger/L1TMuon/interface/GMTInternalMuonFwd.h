#ifndef __l1t_gmt_internal_muonfwd_h__
#define __l1t_gmt_internal_muonfwd_h__

#include "DataFormats/L1Trigger/interface/BXVector.h"

#include <memory>

namespace l1t {
  class GMTInternalMuon;
  typedef std::vector<GMTInternalMuon> GMTInternalMuonCollection;
  typedef std::map<int, std::vector<std::shared_ptr<GMTInternalMuon>>> GMTInternalWedges;
  typedef std::list<std::shared_ptr<GMTInternalMuon>> GMTInternalMuonList;

}  // namespace l1t

#endif /* define __l1t_gmt_internal_muon_h__ */
