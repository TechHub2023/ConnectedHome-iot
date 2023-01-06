/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#pragma once

#include <app-common/zap-generated/af-structs.h>
#include <app-common/zap-generated/cluster-objects.h>
#include <app/InteractionModelEngine.h>
#include <app/data-model/DecodableList.h>
#include <app/util/af-enums.h>
#include <app/util/im-client-callbacks.h>
#include <inttypes.h>
#include <lib/support/FunctionTraits.h>
#include <lib/support/Span.h>

// List specific responses
typedef void (*LocalizationConfigurationSupportedLocalesListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CharSpan> & data);
typedef void (*GeneralCommissioningGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*GeneralCommissioningAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*GeneralCommissioningAttributeListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*SwitchGeneratedCommandListListAttributeCallback)(void * context,
                                                                const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*SwitchAcceptedCommandListListAttributeCallback)(void * context,
                                                               const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*SwitchAttributeListListAttributeCallback)(void * context,
                                                         const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*OperationalCredentialsFabricsListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<
        chip::app::Clusters::OperationalCredentials::Structs::FabricDescriptor::DecodableType> & data);
typedef void (*OperationalCredentialsTrustedRootCertificatesListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::ByteSpan> & data);
typedef void (*FixedLabelLabelListListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::FixedLabel::Structs::LabelStruct::DecodableType> & data);
typedef void (*ModeSelectSupportedModesListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::ModeSelect::Structs::ModeOptionStruct::DecodableType> & data);
typedef void (*ModeSelectGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ModeSelectAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ModeSelectAttributeListListAttributeCallback)(void * context,
                                                             const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*ThermostatUserInterfaceConfigurationGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ThermostatUserInterfaceConfigurationAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ThermostatUserInterfaceConfigurationAttributeListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*RelativeHumidityMeasurementGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*RelativeHumidityMeasurementAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*RelativeHumidityMeasurementAttributeListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*TargetNavigatorTargetListListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::TargetNavigator::Structs::TargetInfo::DecodableType> & data);
typedef void (*TargetNavigatorGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*TargetNavigatorAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*TargetNavigatorAttributeListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*KeypadInputGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*KeypadInputAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*KeypadInputAttributeListListAttributeCallback)(void * context,
                                                              const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*ContentLauncherAcceptHeaderListAttributeCallback)(void * context,
                                                                 const chip::app::DataModel::DecodableList<chip::CharSpan> & data);
typedef void (*ContentLauncherGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ContentLauncherAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ContentLauncherAttributeListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*ApplicationBasicAllowedVendorListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::VendorId> & data);
typedef void (*ApplicationBasicGeneratedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ApplicationBasicAcceptedCommandListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*ApplicationBasicAttributeListListAttributeCallback)(
    void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
