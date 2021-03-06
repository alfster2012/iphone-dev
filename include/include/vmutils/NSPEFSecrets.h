/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMachOTaskImage;

@interface NSPEFSecrets : NSObject
{
    unsigned int _task;	// 4 = 0x4
    NSMachOTaskImage *_taskImage;	// 8 = 0x8
    unsigned int _version;	// 12 = 0xc
    unsigned int _universe_length;	// 16 = 0x10
    unsigned int _universe_container_offset;	// 20 = 0x14
    unsigned int _universe_connection_offset;	// 24 = 0x18
    unsigned int _universe_closure_offset;	// 28 = 0x1c
    unsigned int _connection_length;	// 32 = 0x20
    unsigned int _connection_next_offset;	// 36 = 0x24
    unsigned int _connection_container_offset;	// 40 = 0x28
    unsigned int _container_length;	// 44 = 0x2c
    unsigned int _container_next_offset;	// 48 = 0x30
    unsigned int _container_address_offset;	// 52 = 0x34
    unsigned int _container_length_offset;	// 56 = 0x38
    unsigned int _container_fragment_name_offset;	// 60 = 0x3c
    unsigned int _container_section_count_offset;	// 64 = 0x40
    unsigned int _container_sections_offset;	// 68 = 0x44
    unsigned int _section_length;	// 72 = 0x48
    unsigned int _section_total_length_offset;	// 76 = 0x4c
    unsigned int _instance_length;	// 80 = 0x50
    unsigned int _instance_address_offset;	// 84 = 0x54
    unsigned int _universe;	// 88 = 0x58
    unsigned int _context;	// 92 = 0x5c
    unsigned int _hooks;	// 96 = 0x60
}

- (id)initWithTask:(unsigned int)fp8 image:(id)fp12;	// IMP=0x31891e10
- (id)pefBinaries;	// IMP=0x31892100
- (int)pefBinaryCount;	// IMP=0x3189206c

@end

