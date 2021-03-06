/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct shared_ptr<vision::mod::ClusteringAbstract> {
	ClusteringAbstract __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ClusteringAbstract>;

typedef struct shared_ptr<vision::mod::GreedyClustererFacesAPI> {
	GreedyClustererFacesAPI __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::GreedyClustererFacesAPI>;

typedef struct CGImage* CGImageRef;

typedef struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> {
	ImageDescriptorProcessorAbstract __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>;

typedef struct shared_ptr<vision::mod::ImageClassifierAbstract> {
	ImageClassifierAbstract __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageClassifierAbstract>;

typedef struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> {
	ImageClassifier_HierarchicalModel __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CVBuffer* CVBufferRef;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct Geometry2D_point2D_ {
	float x;
	float y;
} Geometry2D_point2D_;

typedef struct Geometry2D_size2D_ {
	float height;
	float width;
} Geometry2D_size2D_;

typedef struct Geometry2D_rect2D_ {
	Geometry2D_point2D_ origin;
	Geometry2D_size2D_ size;
} Geometry2D_rect2D_;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __first_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct shared_ptr<vision::mod::ModelValues> {
	ModelValues __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ModelValues>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, void *> > >;

typedef struct _tree<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true>, std::__1::allocator<std::__1::__value_type<(anonymous namespace)::Faceprint, int> > > {
	__tree_node<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true> > __pair3_;
} tree<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true>, std::__1::allocator<std::__1::__value_type<(anonymous namespace)::Faceprint, int> > >;

typedef struct map<(anonymous namespace)::Faceprint, int, std::__1::less<(anonymous namespace)::Faceprint>, std::__1::allocator<std::__1::pair<const (anonymous namespace)::Faceprint, int> > > {
	tree<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true>, std::__1::allocator<std::__1::__value_type<(anonymous namespace)::Faceprint, int> > > __tree_;
} map<(anonymous namespace)::Faceprint, int, std::__1::less<(anonymous namespace)::Faceprint>, std::__1::allocator<std::__1::pair<const (anonymous namespace)::Faceprint, int> > >;

typedef struct shared_ptr<vision::mod::LandmarkAttributes> {
	LandmarkAttributes __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::LandmarkAttributes>;

typedef struct shared_ptr<Espresso::net> {
	net __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::net>;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > {
	shared_ptr<Espresso::net> __first_;
} compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >;

typedef struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > {
	shared_ptr<Espresso::net> __begin_;
	shared_ptr<Espresso::net> __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >;

typedef struct TemplateObjectDetectorApplyiiiiB[2f][2f]fBBffifhoggradientChnsFeatiihoggradientgradientivector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply> >DTreeApplyDTreeApply__compressed_pair<vision::hum::DTreeApply *, std::__1::allocator<vision::hum::DTreeApply> >DTreeApplyvector<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > > >map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >__compressed_pair<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > *, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > > >map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >vector<float, std::__1::allocator<float> >ff__compressed_pair<float *, std::__1::allocator<float> >fvector<vision::hum::DTreeNode *, std::__1::allocator<vision::hum::DTreeNode *> >DTreeNodeDTreeNode__compressed_pair<vision::hum::DTreeNode **, std::__1::allocator<vision::hum::DTreeNode *> >DTreeNodefadaBoostApplyvector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply> >DTreeApplyDTreeApply__compressed_pair<vision::hum::DTreeApply *, std::__1::allocator<vision::hum::DTreeApply> >DTreeApplylinearSVMApplyvector<float, std::__1::allocator<float> >ff__compressed_pair<float *, std::__1::allocator<float> >ffvector<float, std::__1::allocator<float> >ff__compressed_pair<float *, std::__1::allocator<float> >f@* emplateObjectDetectorApplyRef;

typedef struct shared_ptr<vision::mod::VIPIdentification> {
	VIPIdentification __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::VIPIdentification>;

typedef struct shared_ptr<vision::mod::FaceRegionMap> {
	FaceRegionMap __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceRegionMap>;

typedef struct {
	[4 field1];
} SCD_Struct_CV32;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct shared_ptr<vision::mod::LandmarkDetector> {
	LandmarkDetector __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::LandmarkDetector>;

typedef struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> {
	ObjectDetector_DCNFaceDetector __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector>;

typedef struct _compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> > {
	model_file_cache __first_;
} compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> >;

typedef struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> > {
	compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> > __ptr_;
} unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> >;

typedef struct shared_ptr<DML> {
	DML __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<DML>;

typedef struct shared_ptr<vision::mod::FaceFrontalizer> {
	FaceFrontalizer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceFrontalizer>;

typedef struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> {
	ImageDescriptorAugmenterFlip __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageDescriptorAugmenterFlip>;

typedef struct shared_ptr<unsigned char> {
	char* __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<unsigned char>;

typedef struct shared_ptr<vision::mod::SimilarityMatrixAbstract> {
	SimilarityMatrixAbstract __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::SimilarityMatrixAbstract>;

typedef struct _compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > {
	pair<unsigned long long, unsigned long long> __first_;
} compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >;

typedef struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > {
	pair<unsigned long long, unsigned long long> __begin_;
	pair<unsigned long long, unsigned long long> __end_;
	compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > __end_cap_;
} vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __first_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > {
	shared_ptr<Espresso::fast_pyramid_resizer> __first_;
} compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >;

typedef struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > {
	shared_ptr<Espresso::fast_pyramid_resizer> __begin_;
	shared_ptr<Espresso::fast_pyramid_resizer> __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > {
	shared_ptr<Espresso::blob<float, 3> > __first_;
} compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >;

typedef struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > {
	shared_ptr<Espresso::blob<float, 3> > __begin_;
	shared_ptr<Espresso::blob<float, 3> > __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >;

typedef struct pair<unsigned long long, unsigned long long> {
	unsigned long long first;
	unsigned long long second;
} pair<unsigned long long, unsigned long long>;

typedef struct net_strides_configuration {
	int num_layer;
	vector<int, std::__1::allocator<int> > kernel_size;
	vector<int, std::__1::allocator<int> > stride;
	vector<int, std::__1::allocator<int> > pad;
} net_strides_configuration;

typedef struct shared_ptr<Espresso::abstract_context> {
	abstract_context __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::abstract_context>;

typedef struct shared_ptr<vision::mod::FaceboxAligner> {
	FaceboxAligner __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceboxAligner>;

typedef struct Projections_meanStdTable {
	float sumTable;
	float sumSqTable;
} Projections_meanStdTable;

typedef struct FastRegistration_Signatures {
	float piRow;
	unsigned long long nPiRow;
	Projections_meanStdTable piRowTable;
	float piCol;
	unsigned long long nPiCol;
	Projections_meanStdTable piColTable;
	char* _memoryContainer;
} FastRegistration_Signatures;

