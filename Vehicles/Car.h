//
//  Car.h
//  Vehicles
//
//  Created by Pierre Binon on 2017-01-20.
//  Copyright © 2017 Designated Nerd Software. All rights reserved.
//

#import "Vehicle.h"


@interface Car : Vehicle

@property (nonatomic, assign) BOOL isConvertible;
@property (nonatomic, assign) BOOL isHatchback;
@property (nonatomic, assign) BOOL hasSunroof;
@property (nonatomic, assign) NSInteger numberOfDoors;

@end
