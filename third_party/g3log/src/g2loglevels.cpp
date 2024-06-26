/** ==========================================================================
 * 2012 by KjellKod.cc. This is PUBLIC DOMAIN to use at your own risk and comes
 * with no warranties. This code is yours to share, use and modify with no
 * strings attached and no restrictions or obligations.
 * 
 * For more information see g3log/LICENSE or refer refer to http://unlicense.org
 * ============================================================================
 * Filename:g2loglevels.cpp  Part of Framework for Logging and Design By Contract
 * Created: 2012 by Kjell Hedström
 *
 * PUBLIC DOMAIN and Not copywrited. First published at KjellKod.cc
 * ********************************************* */

#include "g2loglevels.hpp"
#include "g2log.hpp"
#include <atomic>
#include <cassert>
namespace g2 {
   namespace internal {
      bool wasFatal(const LEVELS& level) {
         return level.value >= LFATAL.value;
      }

#ifdef G2_DYNAMIC_LOGGING
      // All levels are by default ON: i.e. for VERBOSE, DEBUG, INFO, WARNING, ERROR, FATAL, MAX
      const int g_level_size{LFATAL.value + 1};
	  std::atomic<bool> g_log_level_status[10]{{false}, {true}, {true}, {false}, {false}, {false}, {true}, {true}, {true}, {true}};
#endif	
   } // internal

#ifdef G2_DYNAMIC_LOGGING

   void setLogLevel(LEVELS log_level, bool enabled) {
      assert(internal::g_level_size == 10 && "Mismatch between number of logging levels and their use");
      int level = log_level.value;
      CHECK((level >= LMIN.value) && (level <= LFATAL.value));
      internal::g_log_level_status[level].store(enabled, std::memory_order_release);
   }
#endif

   bool logLevel(LEVELS log_level) {
#ifdef G2_DYNAMIC_LOGGING
      int level = log_level.value;
	  CHECK((level >= LMIN.value) && (level <= LFATAL.value));
      bool status = (internal::g_log_level_status[level].load(std::memory_order_acquire));
      return status;
#endif
      return true;
   }
} // g2
