/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

/* @migen@ */
#include <MI.h>
#include "ABC_PhysicalPackage.h"

void MI_CALL ABC_PhysicalPackage_Load(
    ABC_PhysicalPackage_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL ABC_PhysicalPackage_Unload(
    ABC_PhysicalPackage_Self* self,
    MI_Context* context)
{
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL ABC_PhysicalPackage_EnumerateInstances(
    ABC_PhysicalPackage_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_PhysicalPackage_GetInstance(
    ABC_PhysicalPackage_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_PhysicalPackage* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_PhysicalPackage_CreateInstance(
    ABC_PhysicalPackage_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_PhysicalPackage* newInstance)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_PhysicalPackage_ModifyInstance(
    ABC_PhysicalPackage_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_PhysicalPackage* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_PhysicalPackage_DeleteInstance(
    ABC_PhysicalPackage_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_PhysicalPackage* instanceName)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_PhysicalPackage_Invoke_IsCompatible(
    ABC_PhysicalPackage_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_PhysicalPackage* instanceName,
    const ABC_PhysicalPackage_IsCompatible* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

