/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicForYouRecommendationsResponse, NSOperationQueue;

@interface MCDForYouContentManager : NSObject {

	BOOL _hasAdditionalRecommendations;
	MusicForYouRecommendationsResponse* _recommendationsResponse;
	long long _modelRevisionID;
	unsigned long long _additionalRecommendationsLoadedCount;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic) BOOL hasAdditionalRecommendations;                                         //@synthesize hasAdditionalRecommendations=_hasAdditionalRecommendations - In the implementation block
@property (nonatomic,retain) MusicForYouRecommendationsResponse * recommendationsResponse;              //@synthesize recommendationsResponse=_recommendationsResponse - In the implementation block
@property (assign,nonatomic) long long modelRevisionID;                                                 //@synthesize modelRevisionID=_modelRevisionID - In the implementation block
@property (assign,nonatomic) unsigned long long additionalRecommendationsLoadedCount;                   //@synthesize additionalRecommendationsLoadedCount=_additionalRecommendationsLoadedCount - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                         //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setHasAdditionalRecommendations:(BOOL)arg1 ;
-(BOOL)hasAdditionalRecommendations;
-(void)setAdditionalRecommendationsLoadedCount:(unsigned long long)arg1 ;
-(id)_newForYouRecommendationsRequestWithType:(unsigned long long)arg1 ;
-(BOOL)_responseHasContent:(id)arg1 ;
-(void)setRecommendationsResponse:(MusicForYouRecommendationsResponse *)arg1 ;
-(id)lastRecommendation;
-(void)_additionalRecommendationsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)additionalRecommendationsLoadedCount;
-(MusicForYouRecommendationsResponse *)recommendationsResponse;
-(void)loadMCDForYouContentWithCompletion:(/*^block*/id)arg1 ;
-(long long)modelRevisionID;
-(void)setModelRevisionID:(long long)arg1 ;
@end

