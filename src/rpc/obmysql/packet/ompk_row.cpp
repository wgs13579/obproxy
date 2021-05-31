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

#define USING_LOG_PREFIX RPC_OBMYSQL

#include "rpc/obmysql/packet/ompk_row.h"

using namespace oceanbase::obmysql;

OMPKRow::OMPKRow(const ObMySQLRow &row)
    : row_(row)
{

}

int OMPKRow::decode()
{
  int ret = OB_SUCCESS;
  //OB_ASSERT(NULL != cdata_);
  if (NULL == cdata_) {
    ret = OB_INVALID_ARGUMENT;
    LOG_ERROR("null input", K(ret));
  }

  return ret;
}

int OMPKRow::serialize(char *buffer, int64_t len, int64_t &pos) const
{
  return row_.serialize(buffer, len, pos);
}
