//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "DestructibleDebugRenderParams.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace destructible
{

using namespace DestructibleDebugRenderParamsNS;

const char* const DestructibleDebugRenderParamsFactory::vptr =
    NvParameterized::getVptr<DestructibleDebugRenderParams, DestructibleDebugRenderParams::ClassAlignment>();

const uint32_t NumParamDefs = 10;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 9 },
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->VISUALIZE_DESTRUCTIBLE_ACTOR), NULL, 0 }, // VISUALIZE_DESTRUCTIBLE_ACTOR
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->VISUALIZE_DESTRUCTIBLE_BOUNDS), NULL, 0 }, // VISUALIZE_DESTRUCTIBLE_BOUNDS
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->VISUALIZE_DESTRUCTIBLE_SUPPORT), NULL, 0 }, // VISUALIZE_DESTRUCTIBLE_SUPPORT
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->VISUALIZE_DESTRUCTIBLE_ACTOR_POSE), NULL, 0 }, // VISUALIZE_DESTRUCTIBLE_ACTOR_POSE
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_POSE), NULL, 0 }, // THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_POSE
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->VISUALIZE_DESTRUCTIBLE_ACTOR_NAME), NULL, 0 }, // VISUALIZE_DESTRUCTIBLE_ACTOR_NAME
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_NAME), NULL, 0 }, // THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_NAME
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->VISUALIZE_DESTRUCTIBLE_FRAGMENT_POSE), NULL, 0 }, // VISUALIZE_DESTRUCTIBLE_FRAGMENT_POSE
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->THRESHOLD_DISTANCE_DESTRUCTIBLE_FRAGMENT_POSE), NULL, 0 }, // THRESHOLD_DISTANCE_DESTRUCTIBLE_FRAGMENT_POSE
};


bool DestructibleDebugRenderParams::mBuiltFlag = false;
NvParameterized::MutexType DestructibleDebugRenderParams::mBuiltFlagMutex;

DestructibleDebugRenderParams::DestructibleDebugRenderParams(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &DestructibleDebugRenderParamsFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

DestructibleDebugRenderParams::~DestructibleDebugRenderParams()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void DestructibleDebugRenderParams::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~DestructibleDebugRenderParams();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* DestructibleDebugRenderParams::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* DestructibleDebugRenderParams::getParameterDefinitionTree(void) const
{
	DestructibleDebugRenderParams* tmpParam = const_cast<DestructibleDebugRenderParams*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType DestructibleDebugRenderParams::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType DestructibleDebugRenderParams::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void DestructibleDebugRenderParams::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<DestructibleDebugRenderParams::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void DestructibleDebugRenderParams::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void DestructibleDebugRenderParams::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="VISUALIZE_DESTRUCTIBLE_ACTOR"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("VISUALIZE_DESTRUCTIBLE_ACTOR", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Module switch - whether or not to visualize destruction.", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="VISUALIZE_DESTRUCTIBLE_BOUNDS"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("VISUALIZE_DESTRUCTIBLE_BOUNDS", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Shows the axis-aligned bounding box which contains all chunks for each destructible actor.", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="VISUALIZE_DESTRUCTIBLE_SUPPORT"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("VISUALIZE_DESTRUCTIBLE_SUPPORT", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Shows the support graph as lines and support chunks' bounding boxes.", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="VISUALIZE_DESTRUCTIBLE_ACTOR_POSE"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("VISUALIZE_DESTRUCTIBLE_ACTOR_POSE", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Shows the coordinate frame representing the local origin for unfractured destructibles.", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_POSE"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_POSE", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "If VISUALIZE_DESTRUCTIBLE_ACTOR_POSE is true, the maximum object-to-eye distance to draw the chunk poses.", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="VISUALIZE_DESTRUCTIBLE_ACTOR_NAME"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("VISUALIZE_DESTRUCTIBLE_ACTOR_NAME", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Shows the name of each destructible.", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_NAME"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_NAME", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "If VISUALIZE_DESTRUCTIBLE_ACTOR_NAME is true, the maximum object-to-eye distance to draw the actor names.", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="VISUALIZE_DESTRUCTIBLE_FRAGMENT_POSE"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("VISUALIZE_DESTRUCTIBLE_FRAGMENT_POSE", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Shows the coordinate frame representing the local origin for each chunk island.", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="THRESHOLD_DISTANCE_DESTRUCTIBLE_FRAGMENT_POSE"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("THRESHOLD_DISTANCE_DESTRUCTIBLE_FRAGMENT_POSE", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "If VISUALIZE_DESTRUCTIBLE_FRAGMENT_POSE is true, the maximum object-to-eye distance to draw the fragment poses", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[9];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(9);

		ParamDefTable[0].setChildren(Children, 9);
	}

	mBuiltFlag = true;

}
void DestructibleDebugRenderParams::initStrings(void)
{
}

void DestructibleDebugRenderParams::initDynamicArrays(void)
{
}

void DestructibleDebugRenderParams::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	VISUALIZE_DESTRUCTIBLE_ACTOR = bool(true);
	VISUALIZE_DESTRUCTIBLE_BOUNDS = float(0);
	VISUALIZE_DESTRUCTIBLE_SUPPORT = float(0);
	VISUALIZE_DESTRUCTIBLE_ACTOR_POSE = bool(true);
	THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_POSE = float(3.402823466e+038);
	VISUALIZE_DESTRUCTIBLE_ACTOR_NAME = bool(true);
	THRESHOLD_DISTANCE_DESTRUCTIBLE_ACTOR_NAME = float(3.402823466e+038);
	VISUALIZE_DESTRUCTIBLE_FRAGMENT_POSE = bool(true);
	THRESHOLD_DISTANCE_DESTRUCTIBLE_FRAGMENT_POSE = float(3.402823466e+038);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void DestructibleDebugRenderParams::initReferences(void)
{
}

void DestructibleDebugRenderParams::freeDynamicArrays(void)
{
}

void DestructibleDebugRenderParams::freeStrings(void)
{
}

void DestructibleDebugRenderParams::freeReferences(void)
{
}

} // namespace destructible
} // namespace nvidia
