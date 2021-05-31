/**
 * Copyright (c) 2021 OceanBase
 * OceanBase Database Proxy(ODP) is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef _OB_SPIN_LOCK_H
#define _OB_SPIN_LOCK_H 1
#include <pthread.h>
#include "lib/ob_define.h"
#include "lib/stat/ob_latch_define.h"
#include "lib/time/ob_time_utility.h"
#include "lib/lock/ob_lock_guard.h"
#include "lib/lock/ob_latch.h"

namespace oceanbase
{
using lib::ObLockGuard;
namespace common
{
/**
 * A simple wrapper of pthread spin lock
 *
 */
class ObSpinLock
{
public:
  explicit ObSpinLock(uint32_t latch_id = ObLatchIds::DEFAULT_SPIN_LOCK);
  ~ObSpinLock();
  int lock();
  int trylock();
  int unlock();
private:
  // data members
  ObLatch latch_;
  uint32_t latch_id_;
private:
  DISALLOW_COPY_AND_ASSIGN(ObSpinLock);
};

inline ObSpinLock::ObSpinLock(uint32_t latch_id)
    : latch_id_(latch_id)
{
}

inline ObSpinLock::~ObSpinLock()
{
}

inline int ObSpinLock::lock()
{
  return latch_.wrlock(latch_id_);
}

inline int ObSpinLock::trylock()
{
  return latch_.try_wrlock(latch_id_);
}

inline int ObSpinLock::unlock()
{
  return latch_.unlock();
}

////////////////////////////////////////////////////////////////
// A lock class that do nothing, used as template argument
class ObNullLock
{
public:
  ObNullLock() {};
  ~ObNullLock() {};
  int lock() { return OB_SUCCESS; }
  int unlock() { return OB_SUCCESS; }
private:
  DISALLOW_COPY_AND_ASSIGN(ObNullLock);
};

typedef lib::ObLockGuard<common::ObSpinLock> ObSpinLockGuard;

} // end namespace common
} // end namespace oceanbase

#endif /* _OB_SPIN_LOCK_H */
