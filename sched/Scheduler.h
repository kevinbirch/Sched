/*
 * The MIT License
 *
 * Copyright (c) 2012 Kevin Birch <kmb@pobox.com>. Some rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#import <Cocoa/Cocoa.h>
#import "CalendarController.h"

@interface Scheduler : NSObject <NSApplicationDelegate>

@property (atomic, strong)      IBOutlet NSWindow  *window;
@property (atomic, strong)      IBOutlet NSFormCell *eventDate;
@property (nonatomic, copy)     NSString *selectedTab;
@property (nonatomic, readonly) Reminder *reminder;
@property (nonatomic, readonly) Event *event;
@property (nonatomic, readonly) NSArray *reminderCalendars;
@property (nonatomic, readonly) NSArray *eventCalendars;
@property (nonatomic, readonly, getter=isReady) BOOL ready;
@property (nonatomic, assign, setter=setOptionsVisible:) BOOL optionsVisible;
@property (nonatomic, readonly) NSString *durationLabel;

- (void) create;
- (IBAction) toggleEventDateFormat:(id)sender;

@end
