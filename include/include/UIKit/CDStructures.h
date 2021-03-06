/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

@class UIImage, UIView;

struct CGColor;

struct CGContext;

struct CGImage;

struct CGPath;

struct CGShading;

struct String {
    unsigned short m_size;
    unsigned short m_capacity;
    unsigned short m_length;
    unsigned char m_buffer_type;
    char *m_buffer;
    char m_static_buffer[16];
};

struct WKView;

struct _WKObject {
    unsigned int referenceCount;
    struct _WKClassInfo *classInfo;
};

struct WKWindow {
    struct _WKObject _field1;
    struct CGRect _field2;
    struct WKView *_field3;
    struct WKView *_field4;
    struct __GSEvent *_field5;
    void *_field6;
    void *_field7;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct _NSZone;

struct _UIRectInsets {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct _UIRenderInfo {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    char *_field4;
};

struct _WKClassInfo;

struct __CFArray;

struct __CFCharacterSet;

struct __CFDateFormatter;

struct __CFDictionary;

struct __CFMachPort;

struct __CFRunLoopObserver;

struct __CFString;

struct __CFTimeZone;

struct __CoreSurfaceBuffer;

struct __GSEvent;

struct __GSFont;

struct __GSHeartbeat;

struct __GSWindow;

struct __SCNetworkReachability;

typedef struct {
    double width;
    double height;
} CDAnonymousStruct6;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
} CDAnonymousStruct3;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDAnonymousStruct9;

typedef struct {
    int _field1;
    int _field2;
    id _field3;
    id _field4;
    float _field5;
    int _field6;
    SEL _field7;
    id _field8;
} CDAnonymousStruct2;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    char _field5;
    char _field6;
} CDAnonymousStruct10;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    id _field6;
    id _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    id _field11;
} CDAnonymousStruct5;

typedef struct {
    struct CGRect left;
    struct CGRect middle;
    struct CGRect right;
} CDAnonymousStruct4;

typedef struct {
    float _field1;
    float _field2;
} CDAnonymousStruct1;

typedef struct {
    id _field1;
    struct CGColor *_field2;
    struct CGColor *_field3;
    id _field4;
} CDAnonymousStruct7;

typedef struct {
    CDAnonymousStruct4 top;
    struct {
        struct CGRect _field1;
        struct CGRect _field2;
        struct CGRect _field3;
    } middle;
    struct {
        struct CGRect _field1;
        struct CGRect _field2;
        struct CGRect _field3;
    } bottom;
} CDAnonymousStruct11;

typedef struct {
    UIImage *left;
    UIImage *right;
    UIImage *center;
} CDAnonymousStruct8;

typedef struct {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    short _field4;
    short _field5;
    short _field6;
    short _field7;
    unsigned char _field8;
    unsigned char _field9;
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3;
        float _field4;
        struct CGPoint _field5;
    } _field10[0];
} CDAnonymousStruct12;

typedef union {
    UIImage *image;
    UIView *view;
} CDAnonymousUnion1;

