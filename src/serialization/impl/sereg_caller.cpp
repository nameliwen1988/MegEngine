/**
 * \file src/serialization/impl/sereg_caller.cpp
 * MegEngine is Licensed under the Apache License, Version 2.0 (the "License")
 *
 * Copyright (c) 2014-2020 Megvii Inc. All rights reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT ARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */
// generated by Makefile
namespace mgb{void call_sereg(){}}
#if MGB_ENABLE_FBS_SERIALIZATION
#include "flatbuffer_converter.inl"
#endif
#include "./extern_c_opr.sereg.h"
#include "../../opr/impl/basic_arith.sereg.h"
#include "../../opr/impl/blas.sereg.h"
#include "../../opr/impl/cond.sereg.h"
#include "../../opr/impl/dnn/dnn.sereg.h"
#include "../../opr/impl/imgproc.sereg.h"
#include "../../opr/impl/indexing.sereg.h"
#include "../../opr/impl/io.sereg.h"
#include "../../opr/impl/loop/forward.sereg.h"
#include "../../opr/impl/loop/grad.sereg.h"
#include "../../opr/impl/misc.sereg.h"
#include "../../opr/impl/nn_int.sereg.h"
#include "../../opr/impl/rand.sereg.h"
#include "../../opr/impl/tensor_gen.sereg.h"
#include "../../opr/impl/tensor_manip.sereg.h"
#include "../../opr/impl/utility.sereg.h"
#if MGB_ENABLE_TENSOR_RT
#include "../../tensorrt/impl/tensorrt_opr.sereg.h"
#endif
#if MGB_JIT
#include "../../jit/impl/jit.sereg.h"
#endif