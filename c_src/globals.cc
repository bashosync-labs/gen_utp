// -------------------------------------------------------------------
//
// globals.h: uTP driver global variables
//
// Copyright (c) 2012 Basho Technologies, Inc. All Rights Reserved.
//
// This file is provided to you under the Apache License,
// Version 2.0 (the "License"); you may not use this file
// except in compliance with the License.  You may obtain
// a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// -------------------------------------------------------------------

#include "globals.h"


using namespace UtpDrv;

// non-const due to Erlang driver function requirements
char* UtpDrv::drv_name = const_cast<char*>("utpdrv");

UtpDrv::MainPort* UtpDrv::main_port = 0;

ErlDrvMutex* UtpDrv::utp_mutex = 0;
ErlDrvMutex* UtpDrv::drv_mutex = 0;
