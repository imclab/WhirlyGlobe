/*
 *  GlobeViewController.h
 *  WhirlyGlobeComponent
 *
 *  Created by Steve Gifford on 7/21/12.
 *  Copyright 2011 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#import <UIKit/UIKit.h>
#import <WGCoordinate.h>
#import <WGScreenMarker.h>

@class WGViewControllerLayer;
@class WGComponentObject;

@interface WhirlyGlobeViewController : UIViewController

/// Add a spherical earth layer with the given set of base images
- (WGViewControllerLayer *)addSphericalEarthLayerWithImageSet:(NSString *)name;

/// Add a group of screen (2D) markers
- (WGComponentObject *)addScreenMarkers:(NSArray *)markers;

/// Remove the data associated with an object the user added earlier
- (void)removeObject:(WGComponentObject *)theObj;

@end
