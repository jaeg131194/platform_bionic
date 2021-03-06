/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __AMDGPU_DRM_H__
#define __AMDGPU_DRM_H__
#include "drm.h"
#ifdef __cplusplus
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define DRM_AMDGPU_GEM_CREATE 0x00
#define DRM_AMDGPU_GEM_MMAP 0x01
#define DRM_AMDGPU_CTX 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_AMDGPU_BO_LIST 0x03
#define DRM_AMDGPU_CS 0x04
#define DRM_AMDGPU_INFO 0x05
#define DRM_AMDGPU_GEM_METADATA 0x06
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_AMDGPU_GEM_WAIT_IDLE 0x07
#define DRM_AMDGPU_GEM_VA 0x08
#define DRM_AMDGPU_WAIT_CS 0x09
#define DRM_AMDGPU_GEM_OP 0x10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_AMDGPU_GEM_USERPTR 0x11
#define DRM_IOCTL_AMDGPU_GEM_CREATE DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_CREATE, union drm_amdgpu_gem_create)
#define DRM_IOCTL_AMDGPU_GEM_MMAP DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_MMAP, union drm_amdgpu_gem_mmap)
#define DRM_IOCTL_AMDGPU_CTX DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_CTX, union drm_amdgpu_ctx)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_IOCTL_AMDGPU_BO_LIST DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_BO_LIST, union drm_amdgpu_bo_list)
#define DRM_IOCTL_AMDGPU_CS DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_CS, union drm_amdgpu_cs)
#define DRM_IOCTL_AMDGPU_INFO DRM_IOW(DRM_COMMAND_BASE + DRM_AMDGPU_INFO, struct drm_amdgpu_info)
#define DRM_IOCTL_AMDGPU_GEM_METADATA DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_METADATA, struct drm_amdgpu_gem_metadata)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_IOCTL_AMDGPU_GEM_WAIT_IDLE DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_WAIT_IDLE, union drm_amdgpu_gem_wait_idle)
#define DRM_IOCTL_AMDGPU_GEM_VA DRM_IOW(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_VA, struct drm_amdgpu_gem_va)
#define DRM_IOCTL_AMDGPU_WAIT_CS DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_WAIT_CS, union drm_amdgpu_wait_cs)
#define DRM_IOCTL_AMDGPU_GEM_OP DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_OP, struct drm_amdgpu_gem_op)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_IOCTL_AMDGPU_GEM_USERPTR DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_USERPTR, struct drm_amdgpu_gem_userptr)
#define AMDGPU_GEM_DOMAIN_CPU 0x1
#define AMDGPU_GEM_DOMAIN_GTT 0x2
#define AMDGPU_GEM_DOMAIN_VRAM 0x4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_GEM_DOMAIN_GDS 0x8
#define AMDGPU_GEM_DOMAIN_GWS 0x10
#define AMDGPU_GEM_DOMAIN_OA 0x20
#define AMDGPU_GEM_CREATE_CPU_ACCESS_REQUIRED (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_GEM_CREATE_NO_CPU_ACCESS (1 << 1)
#define AMDGPU_GEM_CREATE_CPU_GTT_USWC (1 << 2)
struct drm_amdgpu_gem_create_in {
  __u64 bo_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 alignment;
  __u64 domains;
  __u64 domain_flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct drm_amdgpu_gem_create_out {
  __u32 handle;
  __u32 _pad;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union drm_amdgpu_gem_create {
  struct drm_amdgpu_gem_create_in in;
  struct drm_amdgpu_gem_create_out out;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_BO_LIST_OP_CREATE 0
#define AMDGPU_BO_LIST_OP_DESTROY 1
#define AMDGPU_BO_LIST_OP_UPDATE 2
struct drm_amdgpu_bo_list_in {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 operation;
  __u32 list_handle;
  __u32 bo_number;
  __u32 bo_info_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 bo_info_ptr;
};
struct drm_amdgpu_bo_list_entry {
  __u32 bo_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 bo_priority;
};
struct drm_amdgpu_bo_list_out {
  __u32 list_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 _pad;
};
union drm_amdgpu_bo_list {
  struct drm_amdgpu_bo_list_in in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct drm_amdgpu_bo_list_out out;
};
#define AMDGPU_CTX_OP_ALLOC_CTX 1
#define AMDGPU_CTX_OP_FREE_CTX 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_CTX_OP_QUERY_STATE 3
#define AMDGPU_CTX_NO_RESET 0
#define AMDGPU_CTX_GUILTY_RESET 1
#define AMDGPU_CTX_INNOCENT_RESET 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_CTX_UNKNOWN_RESET 3
struct drm_amdgpu_ctx_in {
  __u32 op;
  __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ctx_id;
  __u32 _pad;
};
union drm_amdgpu_ctx_out {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct {
    __u32 ctx_id;
    __u32 _pad;
  } alloc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct {
    __u64 flags;
    __u32 hangs;
    __u32 reset_status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  } state;
};
union drm_amdgpu_ctx {
  struct drm_amdgpu_ctx_in in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  union drm_amdgpu_ctx_out out;
};
#define AMDGPU_GEM_USERPTR_READONLY (1 << 0)
#define AMDGPU_GEM_USERPTR_ANONONLY (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_GEM_USERPTR_VALIDATE (1 << 2)
#define AMDGPU_GEM_USERPTR_REGISTER (1 << 3)
struct drm_amdgpu_gem_userptr {
  __u64 addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 size;
  __u32 flags;
  __u32 handle;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_TILING_ARRAY_MODE_SHIFT 0
#define AMDGPU_TILING_ARRAY_MODE_MASK 0xf
#define AMDGPU_TILING_PIPE_CONFIG_SHIFT 4
#define AMDGPU_TILING_PIPE_CONFIG_MASK 0x1f
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_TILING_TILE_SPLIT_SHIFT 9
#define AMDGPU_TILING_TILE_SPLIT_MASK 0x7
#define AMDGPU_TILING_MICRO_TILE_MODE_SHIFT 12
#define AMDGPU_TILING_MICRO_TILE_MODE_MASK 0x7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_TILING_BANK_WIDTH_SHIFT 15
#define AMDGPU_TILING_BANK_WIDTH_MASK 0x3
#define AMDGPU_TILING_BANK_HEIGHT_SHIFT 17
#define AMDGPU_TILING_BANK_HEIGHT_MASK 0x3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_TILING_MACRO_TILE_ASPECT_SHIFT 19
#define AMDGPU_TILING_MACRO_TILE_ASPECT_MASK 0x3
#define AMDGPU_TILING_NUM_BANKS_SHIFT 21
#define AMDGPU_TILING_NUM_BANKS_MASK 0x3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_TILING_SET(field,value) (((value) & AMDGPU_TILING_ ##field ##_MASK) << AMDGPU_TILING_ ##field ##_SHIFT)
#define AMDGPU_TILING_GET(value,field) (((value) >> AMDGPU_TILING_ ##field ##_SHIFT) & AMDGPU_TILING_ ##field ##_MASK)
#define AMDGPU_GEM_METADATA_OP_SET_METADATA 1
#define AMDGPU_GEM_METADATA_OP_GET_METADATA 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct drm_amdgpu_gem_metadata {
  __u32 handle;
  __u32 op;
  struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u64 flags;
    __u64 tiling_info;
    __u32 data_size_bytes;
    __u32 data[64];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  } data;
};
struct drm_amdgpu_gem_mmap_in {
  __u32 handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 _pad;
};
struct drm_amdgpu_gem_mmap_out {
  __u64 addr_ptr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
union drm_amdgpu_gem_mmap {
  struct drm_amdgpu_gem_mmap_in in;
  struct drm_amdgpu_gem_mmap_out out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct drm_amdgpu_gem_wait_idle_in {
  __u32 handle;
  __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 timeout;
};
struct drm_amdgpu_gem_wait_idle_out {
  __u32 status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 domain;
};
union drm_amdgpu_gem_wait_idle {
  struct drm_amdgpu_gem_wait_idle_in in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct drm_amdgpu_gem_wait_idle_out out;
};
struct drm_amdgpu_wait_cs_in {
  __u64 handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 timeout;
  __u32 ip_type;
  __u32 ip_instance;
  __u32 ring;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ctx_id;
};
struct drm_amdgpu_wait_cs_out {
  __u64 status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
union drm_amdgpu_wait_cs {
  struct drm_amdgpu_wait_cs_in in;
  struct drm_amdgpu_wait_cs_out out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define AMDGPU_GEM_OP_GET_GEM_CREATE_INFO 0
#define AMDGPU_GEM_OP_SET_PLACEMENT 1
struct drm_amdgpu_gem_op {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 handle;
  __u32 op;
  __u64 value;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_VA_OP_MAP 1
#define AMDGPU_VA_OP_UNMAP 2
#define AMDGPU_VM_DELAY_UPDATE (1 << 0)
#define AMDGPU_VM_PAGE_READABLE (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_VM_PAGE_WRITEABLE (1 << 2)
#define AMDGPU_VM_PAGE_EXECUTABLE (1 << 3)
struct drm_amdgpu_gem_va {
  __u32 handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 _pad;
  __u32 operation;
  __u32 flags;
  __u64 va_address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 offset_in_bo;
  __u64 map_size;
};
#define AMDGPU_HW_IP_GFX 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_HW_IP_COMPUTE 1
#define AMDGPU_HW_IP_DMA 2
#define AMDGPU_HW_IP_UVD 3
#define AMDGPU_HW_IP_VCE 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_HW_IP_NUM 5
#define AMDGPU_HW_IP_INSTANCE_MAX_COUNT 1
#define AMDGPU_CHUNK_ID_IB 0x01
#define AMDGPU_CHUNK_ID_FENCE 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_CHUNK_ID_DEPENDENCIES 0x03
struct drm_amdgpu_cs_chunk {
  __u32 chunk_id;
  __u32 length_dw;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 chunk_data;
};
struct drm_amdgpu_cs_in {
  __u32 ctx_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 bo_list_handle;
  __u32 num_chunks;
  __u32 _pad;
  __u64 chunks;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct drm_amdgpu_cs_out {
  __u64 handle;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union drm_amdgpu_cs {
  struct drm_amdgpu_cs_in in;
  struct drm_amdgpu_cs_out out;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_IB_FLAG_CE (1 << 0)
#define AMDGPU_IB_FLAG_PREAMBLE (1 << 1)
struct drm_amdgpu_cs_chunk_ib {
  __u32 _pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 flags;
  __u64 va_start;
  __u32 ib_bytes;
  __u32 ip_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ip_instance;
  __u32 ring;
};
struct drm_amdgpu_cs_chunk_dep {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ip_type;
  __u32 ip_instance;
  __u32 ring;
  __u32 ctx_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 handle;
};
struct drm_amdgpu_cs_chunk_fence {
  __u32 handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 offset;
};
struct drm_amdgpu_cs_chunk_data {
  union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct drm_amdgpu_cs_chunk_ib ib_data;
    struct drm_amdgpu_cs_chunk_fence fence_data;
  };
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_IDS_FLAGS_FUSION 0x1
#define AMDGPU_INFO_ACCEL_WORKING 0x00
#define AMDGPU_INFO_CRTC_FROM_ID 0x01
#define AMDGPU_INFO_HW_IP_INFO 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_INFO_HW_IP_COUNT 0x03
#define AMDGPU_INFO_TIMESTAMP 0x05
#define AMDGPU_INFO_FW_VERSION 0x0e
#define AMDGPU_INFO_FW_VCE 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_INFO_FW_UVD 0x2
#define AMDGPU_INFO_FW_GMC 0x03
#define AMDGPU_INFO_FW_GFX_ME 0x04
#define AMDGPU_INFO_FW_GFX_PFP 0x05
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_INFO_FW_GFX_CE 0x06
#define AMDGPU_INFO_FW_GFX_RLC 0x07
#define AMDGPU_INFO_FW_GFX_MEC 0x08
#define AMDGPU_INFO_FW_SMC 0x0a
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_INFO_FW_SDMA 0x0b
#define AMDGPU_INFO_NUM_BYTES_MOVED 0x0f
#define AMDGPU_INFO_VRAM_USAGE 0x10
#define AMDGPU_INFO_GTT_USAGE 0x11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_INFO_GDS_CONFIG 0x13
#define AMDGPU_INFO_VRAM_GTT 0x14
#define AMDGPU_INFO_READ_MMR_REG 0x15
#define AMDGPU_INFO_DEV_INFO 0x16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_INFO_VIS_VRAM_USAGE 0x17
#define AMDGPU_INFO_MMR_SE_INDEX_SHIFT 0
#define AMDGPU_INFO_MMR_SE_INDEX_MASK 0xff
#define AMDGPU_INFO_MMR_SH_INDEX_SHIFT 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_INFO_MMR_SH_INDEX_MASK 0xff
struct drm_amdgpu_query_fw {
  __u32 fw_type;
  __u32 ip_instance;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 index;
  __u32 _pad;
};
struct drm_amdgpu_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 return_pointer;
  __u32 return_size;
  __u32 query;
  union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct {
      __u32 id;
      __u32 _pad;
    } mode_crtc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct {
      __u32 type;
      __u32 ip_instance;
    } query_hw_ip;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct {
      __u32 dword_offset;
      __u32 count;
      __u32 instance;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
      __u32 flags;
    } read_mmr_reg;
    struct drm_amdgpu_query_fw query_fw;
  };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct drm_amdgpu_info_gds {
  __u32 gds_gfx_partition_size;
  __u32 compute_partition_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 gds_total_size;
  __u32 gws_per_gfx_partition;
  __u32 gws_per_compute_partition;
  __u32 oa_per_gfx_partition;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 oa_per_compute_partition;
  __u32 _pad;
};
struct drm_amdgpu_info_vram_gtt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 vram_size;
  __u64 vram_cpu_accessible_size;
  __u64 gtt_size;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct drm_amdgpu_info_firmware {
  __u32 ver;
  __u32 feature;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_VRAM_TYPE_UNKNOWN 0
#define AMDGPU_VRAM_TYPE_GDDR1 1
#define AMDGPU_VRAM_TYPE_DDR2 2
#define AMDGPU_VRAM_TYPE_GDDR3 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_VRAM_TYPE_GDDR4 4
#define AMDGPU_VRAM_TYPE_GDDR5 5
#define AMDGPU_VRAM_TYPE_HBM 6
#define AMDGPU_VRAM_TYPE_DDR3 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct drm_amdgpu_info_device {
  __u32 device_id;
  __u32 chip_rev;
  __u32 external_rev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 pci_rev;
  __u32 family;
  __u32 num_shader_engines;
  __u32 num_shader_arrays_per_engine;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 gpu_counter_freq;
  __u64 max_engine_clock;
  __u64 max_memory_clock;
  __u32 cu_active_number;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 cu_ao_mask;
  __u32 cu_bitmap[4][4];
  __u32 enabled_rb_pipes_mask;
  __u32 num_rb_pipes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 num_hw_gfx_contexts;
  __u32 _pad;
  __u64 ids_flags;
  __u64 virtual_address_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 virtual_address_max;
  __u32 virtual_address_alignment;
  __u32 pte_fragment_size;
  __u32 gart_page_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ce_ram_size;
  __u32 vram_type;
  __u32 vram_bit_width;
  __u32 vce_harvest_config;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct drm_amdgpu_info_hw_ip {
  __u32 hw_ip_version_major;
  __u32 hw_ip_version_minor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 capabilities_flags;
  __u32 ib_start_alignment;
  __u32 ib_size_alignment;
  __u32 available_rings;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 _pad;
};
#define AMDGPU_FAMILY_UNKNOWN 0
#define AMDGPU_FAMILY_CI 120
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AMDGPU_FAMILY_KV 125
#define AMDGPU_FAMILY_VI 130
#define AMDGPU_FAMILY_CZ 135
#ifdef __cplusplus
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
