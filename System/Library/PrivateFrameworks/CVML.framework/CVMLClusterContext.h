/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CVMLClustering;
@class NSMutableDictionary, NSString, CVMLSimilarityMatrix, NSSet;

@interface CVMLClusterContext : NSObject {

	NSMutableDictionary* _obsDictById;
	id<CVMLClustering> _clustering;
	float _threshold;
	unsigned long long _maxFaceId;
	NSString* _cacheFolderPath;
	BOOL _useClusterObservation;
	CVMLSimilarityMatrix* _matrix;
	NSString* _clusterMethod;

}

@property (retain) CVMLSimilarityMatrix * matrix;                                      //@synthesize matrix=_matrix - In the implementation block
@property (readonly) NSString * clusterMethod;                                         //@synthesize clusterMethod=_clusterMethod - In the implementation block
@property (readonly) BOOL useClusterObservation;                                       //@synthesize useClusterObservation=_useClusterObservation - In the implementation block
@property (getter=getClusteredFaceIds,readonly) NSSet * clusteredFaceIds; 
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(CVMLSimilarityMatrix *)matrix;
-(void)setMatrix:(CVMLSimilarityMatrix *)arg1 ;
-(id)clusterState;
-(id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(BOOL)cancelClustering:(id*)arg1 ;
-(id)refinedSuggestionsForClusterIds:(id)arg1 fromClusters:(id)arg2 affinityThreshold:(float)arg3 error:(id*)arg4 ;
-(id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2 ;
-(id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getDistances:(id)arg1 to:(id)arg2 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(NSString *)clusterMethod;
-(BOOL)useClusterObservation;
-(BOOL)addFaces:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeFaces:(id)arg1 error:(id*)arg2 ;
-(id)clusterFacesWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreClusterState:(id)arg1 cacheFolderPath:(id)arg2 ;
-(id)getClusteredFaceIds;
-(id)getGroupedClusteredFaceIdsForFaceId:(id)arg1 ;
-(id)getDistanceBetweenClustersWithFaceIds:(id)arg1 ;
@end
