#import <Foundation/Foundation.h>

@protocol ESQueriedSet;

@protocol ESReadOnlyDbWrapper <NSObject>

-(id)initWithPath:(NSString*)inPath_;
-(BOOL)open;
-(BOOL)close;


-(NSError*)lastError;
-(id<ESQueriedSet>)select:( NSString* )sql_;
-(double)selectDoubleScalar:( NSString* )sql_;
-(NSInteger)selectIntScalar:( NSString* )sql_;
-(NSString*)selectStringScalar:( NSString* )sql_;
-(BOOL)selectBooleanScalar:( NSString* )sql_;

-(NSString*)databasePath;
-(BOOL)tableExists:(NSString*)tableName_;

@end
