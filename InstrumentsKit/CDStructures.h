//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DTRenderableContentResponse {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct NSMutableSet {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct XRIntKeyedDictionary {
    Class _field1;
};

struct XRSnapToFitUndoInfo {
    char isValid;
    unsigned long long scale;
    unsigned long long offset;
};

struct XRTimeRange {
    unsigned long long start;
    unsigned long long length;
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*> *_field1;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned long long>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<IconLookup_t, NSImage *, std::__1::hash<IconLookup_t>, std::__1::equal_to<IconLookup_t>, std::__1::allocator<std::__1::pair<const IconLookup_t, NSImage *>>> {
    struct __hash_table<std::__1::__hash_value_type<IconLookup_t, NSImage *>, std::__1::__unordered_map_hasher<IconLookup_t, std::__1::__hash_value_type<IconLookup_t, NSImage *>, std::__1::hash<IconLookup_t>, true>, std::__1::__unordered_map_equal<IconLookup_t, std::__1::__hash_value_type<IconLookup_t, NSImage *>, std::__1::equal_to<IconLookup_t>, true>, std::__1::allocator<std::__1::__hash_value_type<IconLookup_t, NSImage *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<IconLookup_t, NSImage *>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<IconLookup_t, std::__1::__hash_value_type<IconLookup_t, NSImage *>, std::__1::hash<IconLookup_t>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<IconLookup_t, std::__1::__hash_value_type<IconLookup_t, NSImage *>, std::__1::equal_to<IconLookup_t>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>, std::__1::hash<NSString *__unsafe_unretained>, std::__1::equal_to<NSString *__unsafe_unretained>, std::__1::allocator<std::__1::pair<NSString *const __unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, std::__1::__unordered_map_hasher<NSString *__unsafe_unretained, std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, std::__1::hash<NSString *__unsafe_unretained>, true>, std::__1::__unordered_map_equal<NSString *__unsafe_unretained, std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, std::__1::equal_to<NSString *__unsafe_unretained>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *__unsafe_unretained, std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, std::__1::hash<NSString *__unsafe_unretained>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *__unsafe_unretained, std::__1::__hash_value_type<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>, std::__1::equal_to<NSString *__unsafe_unretained>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, XRBookmark, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, XRBookmark>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, XRBookmark>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, XRBookmark>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, XRBookmark>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, XRBookmark>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, XRBookmark>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, XRBookmark>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, XRBookmark>, std::__1::equal_to<unsigned long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<XRBookmark, std::__1::allocator<XRBookmark>> {
    union XRBookmark *__begin_;
    union XRBookmark *__end_;
    struct __compressed_pair<XRBookmark *, std::__1::allocator<XRBookmark>> {
        union XRBookmark *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    int type;
    int subtype;
} CDStruct_3570f18b;

// Template types
typedef struct set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned long long>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} set_4cedab1c;

typedef struct vector<XRBookmark, std::__1::allocator<XRBookmark>> {
    union XRBookmark *__begin_;
    union XRBookmark *__end_;
    struct __compressed_pair<XRBookmark *, std::__1::allocator<XRBookmark>> {
        union XRBookmark *__first_;
    } __end_cap_;
} vector_59b01178;

#pragma mark Named Unions

union XRBookmark {
    struct {
        unsigned int _private:62;
        unsigned int userInfo:2;
    } content;
    unsigned long long opaque64BitValue;
};

union _flagTableFilter_u {
    unsigned int _field1;
    struct _flagTableFilter {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :21;
    } _field2;
};

