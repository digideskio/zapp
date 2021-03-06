//
//  ZappWebServer.h
//  Zapp
//
//  Created by Jim Puls on 8/21/11.
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.

#import <Foundation/Foundation.h>

@interface ZappWebServer : NSObject

+ (id)startWithManagedObjectContext:(NSManagedObjectContext *)context;

@end
