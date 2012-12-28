%% -------------------------------------------------------------------
%%
%% gen_utp_opts: socket options for uTP protocol
%%
%% Copyright (c) 2012 Basho Technologies, Inc. All Rights Reserved.
%%
%% This file is provided to you under the Apache License,
%% Version 2.0 (the "License"); you may not use this file
%% except in compliance with the License.  You may obtain
%% a copy of the License at
%%
%%   http://www.apache.org/licenses/LICENSE-2.0
%%
%% Unless required by applicable law or agreed to in writing,
%% software distributed under the License is distributed on an
%% "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
%% KIND, either express or implied.  See the License for the
%% specific language governing permissions and limitations
%% under the License.
%%
%% -------------------------------------------------------------------

-record(utp_options, {
          delivery :: list | binary,
          ip :: string(),
          port :: gen_utp:utpport(),
          fd :: non_neg_integer(),
          family :: inet | inet6,
          send_tmout :: pos_integer() | infinity
         }).