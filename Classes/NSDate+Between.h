/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * Adam Ziolkowski <adam@landasoftware.com> and Leon Handreke <leon.handreke@gmail.com>
 * wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy us a beer in return.
 * ----------------------------------------------------------------------------
 */
// http://www.iphonedevsdk.com/forum/iphone-sdk-development/12093-nsdate-isbetween.html

@interface NSDate (Extend)
- (BOOL)isBetweenDate:(NSDate *)dateStart andDate:(NSDate *)dateEnd;
@end