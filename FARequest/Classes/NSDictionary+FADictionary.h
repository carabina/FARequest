//
//  NSDictionary+FADictionary.h
//
//  Created by Fadi on 19/11/15.
//  Copyright © 2015 Apprikot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (FADictionary)
-(NSString*)generatClassWithName:(NSString *)Name;
-(void)createClassesFile:(NSString*)data;
- (void)dictionaryFromObject:(id)object Error:(NSError**)error;
- (id)fillThisObject:(id)object Error:(NSError**)error;

@end
