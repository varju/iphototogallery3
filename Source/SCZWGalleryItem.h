//
// Copyright (c) Zach Wily
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, 
// are permitted provided that the following conditions are met:
// 
// - Redistributions of source code must retain the above copyright notice, this 
//     list of conditions and the following disclaimer.
// 
// - Redistributions in binary form must reproduce the above copyright notice, this
//     list of conditions and the following disclaimer in the documentation and/or 
//     other materials provided with the distribution.
// 
// - Neither the name of Zach Wily nor the names of its contributors may be used to 
//     endorse or promote products derived from this software without specific prior 
//     written permission.
// 
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
//  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
//  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
//   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
//  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//  
//  This class isn't really needed at all. It doesn't do anything that an NSDictionary couldn't
//  do just as well.
//

#import <Foundation/Foundation.h>

@class SCZWGalleryAlbum;

@interface SCZWGalleryItem : NSObject {
    NSData* data;
    NSString* caption;
    NSString* description;
    NSString* filename;
    NSString* imageType;
    NSArray* keywords;
	int rating;
    SCZWGalleryAlbum* album;
}

- (id)initWithAlbum:(SCZWGalleryAlbum*)newAlbum;
+ (SCZWGalleryItem*)itemWithAlbum:(SCZWGalleryAlbum*)newAlbum;

- (void)setData:(NSData*)newData;
- (NSData*)data;

- (void)setCaption:(NSString*)newCaption;
- (NSString*)caption;

- (void)setDescription:(NSString*)newDescription;
- (NSString*)description;

- (void)setFilename:(NSString*)newFilename;
- (NSString*)filename;

- (void)setImageType:(NSString*)newImageType;
- (NSString*)imageType;

- (void)setKeywords:(NSArray*)newKeywords;
- (NSArray*)keywords;

- (void)setRating:(int)newRating;
- (int)rating;


- (SCZWGalleryAlbum*)album;

@end
