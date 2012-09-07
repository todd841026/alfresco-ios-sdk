/*******************************************************************************
 * Copyright (C) 2005-2012 Alfresco Software Limited.
 * 
 * This file is part of the Alfresco Mobile SDK.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *  
 *  http://www.apache.org/licenses/LICENSE-2.0
 * 
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ******************************************************************************/

#import <Foundation/Foundation.h>

/** The AlfrescoProperty represents a property that's associated with a specific node.
 
 Author: Gavin Cornwell (Alfresco), Tijs Rademakers (Alfresco)
 */

typedef enum 
{
    AlfrescoPropertyTypeString = 0,
    AlfrescoPropertyTypeId,
    AlfrescoPropertyTypeInteger,
    AlfrescoPropertyTypeDecimal,
    AlfrescoPropertyTypeDateTime,
    AlfrescoPropertyTypeBoolean,
} AlfrescoPropertyType;

@interface AlfrescoProperty : NSObject


/// The data type of the property
@property (nonatomic, assign) AlfrescoPropertyType type;


/// Specifies whether the property value is multi-valued.
@property (nonatomic, assign) BOOL isMultiValued;


/// The value of the property.
@property (nonatomic, strong) id value;

/**
 @param properties - the list of values to assign to the AlfrescoActivityEntry object
 @return the AlfrescoActivityEntry object
 */
- (id)initWithProperties:(NSDictionary *)properties;

@end
