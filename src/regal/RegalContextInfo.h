/* NOTE: Do not edit this file, it is generated by a script:
   Export.py --api gl 4.2 --api wgl 4.0 --api glx 4.0 --api cgl 1.4 --api egl 1.0 --outdir .
*/

/*
  Copyright (c) 2011 NVIDIA Corporation
  Copyright (c) 2011-2012 Cass Everitt
  Copyright (c) 2012 Scott Nations
  Copyright (c) 2012 Mathias Schott
  Copyright (c) 2012 Nigel Stewart
  Copyright (c) 2012 Google Inc.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
  Intended formatting conventions:
  $ astyle --style=allman --indent=spaces=2 --indent-switches
*/

#ifndef __REGAL_CONTEXT_INFO_H__
#define __REGAL_CONTEXT_INFO_H__

#include "RegalUtil.h"

REGAL_GLOBAL_BEGIN

#include <GL/Regal.h>

#include <set>
#include <string>

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

struct RegalContext;

struct ContextInfo
{
  ContextInfo();
  ~ContextInfo();

  void init(const RegalContext &context);

  // glewGetExtension, glewIsSupported

  bool getExtension(const char *ext) const;
  bool isSupported(const char *ext) const;

  // As reported by OpenGL implementation

  std::string vendor;
  std::string renderer;
  std::string version;
  std::string extensions;

  // As reported by Regal

  std::string regalVendor;
  std::string regalRenderer;
  std::string regalVersion;
  std::string regalExtensions;

  bool        regal_ext_direct_state_access;

  std::set<std::string> regalExtensionsSet;

  // As supported by the OpenGL implementation

  GLboolean compat : 1;
  GLboolean core   : 1;
  GLboolean gles   : 1;

  GLint     gl_version_major;
  GLint     gl_version_minor;

  GLboolean gl_version_1_0 : 1;
  GLboolean gl_version_1_1 : 1;
  GLboolean gl_version_1_2 : 1;
  GLboolean gl_version_1_3 : 1;
  GLboolean gl_version_1_4 : 1;
  GLboolean gl_version_1_5 : 1;
  GLboolean gl_version_2_0 : 1;
  GLboolean gl_version_2_1 : 1;
  GLboolean gl_version_3_0 : 1;
  GLboolean gl_version_3_1 : 1;
  GLboolean gl_version_3_2 : 1;
  GLboolean gl_version_3_3 : 1;
  GLboolean gl_version_4_0 : 1;
  GLboolean gl_version_4_1 : 1;
  GLboolean gl_version_4_2 : 1;

  GLint     gles_version_major;
  GLint     gles_version_minor;

  GLint     glsl_version_major;
  GLint     glsl_version_minor;

  GLint     glx_version_major;
  GLint     glx_version_minor;

  GLboolean glx_version_1_0 : 1;
  GLboolean glx_version_1_1 : 1;
  GLboolean glx_version_1_2 : 1;
  GLboolean glx_version_1_3 : 1;
  GLboolean glx_version_1_4 : 1;

  GLint     egl_version_major;
  GLint     egl_version_minor;

  GLboolean egl_version_1_0 : 1;
  GLboolean egl_version_1_1 : 1;
  GLboolean egl_version_1_2 : 1;

  GLboolean gl_3dfx_multisample : 1;
  GLboolean gl_3dfx_tbuffer : 1;
  GLboolean gl_3dfx_texture_compression_fxt1 : 1;
  GLboolean gl_amd_blend_minmax_factor : 1;
  GLboolean gl_amd_compressed_3dc_texture : 1;
  GLboolean gl_amd_compressed_atc_texture : 1;
  GLboolean gl_amd_debug_output : 1;
  GLboolean gl_amd_depth_clamp_separate : 1;
  GLboolean gl_amd_draw_buffers_blend : 1;
  GLboolean gl_amd_multi_draw_indirect : 1;
  GLboolean gl_amd_name_gen_delete : 1;
  GLboolean gl_amd_performance_monitor : 1;
  GLboolean gl_amd_pinned_memory : 1;
  GLboolean gl_amd_program_binary_z400 : 1;
  GLboolean gl_amd_query_buffer_object : 1;
  GLboolean gl_amd_sample_positions : 1;
  GLboolean gl_amd_seamless_cubemap_per_texture : 1;
  GLboolean gl_amd_stencil_operation_extended : 1;
  GLboolean gl_amd_vertex_shader_tessellator : 1;
  GLboolean gl_angle_framebuffer_blit : 1;
  GLboolean gl_angle_framebuffer_multisample : 1;
  GLboolean gl_angle_instanced_arrays : 1;
  GLboolean gl_angle_pack_reverse_row_order : 1;
  GLboolean gl_angle_texture_compression_dxt5 : 1;
  GLboolean gl_angle_texture_usage : 1;
  GLboolean gl_angle_translated_shader_source : 1;
  GLboolean gl_apple_aux_depth_stencil : 1;
  GLboolean gl_apple_client_storage : 1;
  GLboolean gl_apple_copy_texture_levels : 1;
  GLboolean gl_apple_element_array : 1;
  GLboolean gl_apple_fence : 1;
  GLboolean gl_apple_float_pixels : 1;
  GLboolean gl_apple_flush_buffer_range : 1;
  GLboolean gl_apple_flush_render : 1;
  GLboolean gl_apple_framebuffer_multisample : 1;
  GLboolean gl_apple_object_purgeable : 1;
  GLboolean gl_apple_pixel_buffer : 1;
  GLboolean gl_apple_rgb_422 : 1;
  GLboolean gl_apple_row_bytes : 1;
  GLboolean gl_apple_specular_vector : 1;
  GLboolean gl_apple_sync : 1;
  GLboolean gl_apple_texture_max_level : 1;
  GLboolean gl_apple_texture_range : 1;
  GLboolean gl_apple_transform_hint : 1;
  GLboolean gl_apple_vertex_array_object : 1;
  GLboolean gl_apple_vertex_array_range : 1;
  GLboolean gl_apple_vertex_program_evaluators : 1;
  GLboolean gl_apple_ycbcr_422 : 1;
  GLboolean gl_arb_es2_compatibility : 1;
  GLboolean gl_arb_es3_compatibility : 1;
  GLboolean gl_arb_base_instance : 1;
  GLboolean gl_arb_blend_func_extended : 1;
  GLboolean gl_arb_cl_event : 1;
  GLboolean gl_arb_clear_buffer_object : 1;
  GLboolean gl_arb_color_buffer_float : 1;
  GLboolean gl_arb_compressed_texture_pixel_storage : 1;
  GLboolean gl_arb_compute_shader : 1;
  GLboolean gl_arb_copy_buffer : 1;
  GLboolean gl_arb_copy_image : 1;
  GLboolean gl_arb_debug_output : 1;
  GLboolean gl_arb_depth_buffer_float : 1;
  GLboolean gl_arb_depth_clamp : 1;
  GLboolean gl_arb_depth_texture : 1;
  GLboolean gl_arb_draw_buffers : 1;
  GLboolean gl_arb_draw_buffers_blend : 1;
  GLboolean gl_arb_draw_elements_base_vertex : 1;
  GLboolean gl_arb_draw_indirect : 1;
  GLboolean gl_arb_draw_instanced : 1;
  GLboolean gl_arb_explicit_uniform_location : 1;
  GLboolean gl_arb_fragment_program : 1;
  GLboolean gl_arb_fragment_shader : 1;
  GLboolean gl_arb_framebuffer_no_attachments : 1;
  GLboolean gl_arb_framebuffer_object : 1;
  GLboolean gl_arb_framebuffer_srgb : 1;
  GLboolean gl_arb_geometry_shader4 : 1;
  GLboolean gl_arb_get_program_binary : 1;
  GLboolean gl_arb_gpu_shader5 : 1;
  GLboolean gl_arb_gpu_shader_fp64 : 1;
  GLboolean gl_arb_half_float_pixel : 1;
  GLboolean gl_arb_half_float_vertex : 1;
  GLboolean gl_arb_imaging : 1;
  GLboolean gl_arb_instanced_arrays : 1;
  GLboolean gl_arb_internalformat_query : 1;
  GLboolean gl_arb_internalformat_query2 : 1;
  GLboolean gl_arb_invalidate_subdata : 1;
  GLboolean gl_arb_map_buffer_alignment : 1;
  GLboolean gl_arb_map_buffer_range : 1;
  GLboolean gl_arb_matrix_palette : 1;
  GLboolean gl_arb_multi_draw_indirect : 1;
  GLboolean gl_arb_multisample : 1;
  GLboolean gl_arb_multitexture : 1;
  GLboolean gl_arb_occlusion_query : 1;
  GLboolean gl_arb_occlusion_query2 : 1;
  GLboolean gl_arb_pixel_buffer_object : 1;
  GLboolean gl_arb_point_parameters : 1;
  GLboolean gl_arb_point_sprite : 1;
  GLboolean gl_arb_program_interface_query : 1;
  GLboolean gl_arb_provoking_vertex : 1;
  GLboolean gl_arb_robustness : 1;
  GLboolean gl_arb_sample_shading : 1;
  GLboolean gl_arb_sampler_objects : 1;
  GLboolean gl_arb_seamless_cube_map : 1;
  GLboolean gl_arb_separate_shader_objects : 1;
  GLboolean gl_arb_shader_atomic_counters : 1;
  GLboolean gl_arb_shader_image_load_store : 1;
  GLboolean gl_arb_shader_objects : 1;
  GLboolean gl_arb_shader_storage_buffer_object : 1;
  GLboolean gl_arb_shader_subroutine : 1;
  GLboolean gl_arb_shading_language_100 : 1;
  GLboolean gl_arb_shading_language_include : 1;
  GLboolean gl_arb_shadow : 1;
  GLboolean gl_arb_shadow_ambient : 1;
  GLboolean gl_arb_stencil_texturing : 1;
  GLboolean gl_arb_sync : 1;
  GLboolean gl_arb_tessellation_shader : 1;
  GLboolean gl_arb_texture_border_clamp : 1;
  GLboolean gl_arb_texture_buffer_object : 1;
  GLboolean gl_arb_texture_buffer_range : 1;
  GLboolean gl_arb_texture_compression : 1;
  GLboolean gl_arb_texture_compression_bptc : 1;
  GLboolean gl_arb_texture_compression_rgtc : 1;
  GLboolean gl_arb_texture_cube_map : 1;
  GLboolean gl_arb_texture_cube_map_array : 1;
  GLboolean gl_arb_texture_env_combine : 1;
  GLboolean gl_arb_texture_env_dot3 : 1;
  GLboolean gl_arb_texture_float : 1;
  GLboolean gl_arb_texture_gather : 1;
  GLboolean gl_arb_texture_mirrored_repeat : 1;
  GLboolean gl_arb_texture_multisample : 1;
  GLboolean gl_arb_texture_rectangle : 1;
  GLboolean gl_arb_texture_rg : 1;
  GLboolean gl_arb_texture_rgb10_a2ui : 1;
  GLboolean gl_arb_texture_storage : 1;
  GLboolean gl_arb_texture_storage_multisample : 1;
  GLboolean gl_arb_texture_swizzle : 1;
  GLboolean gl_arb_texture_view : 1;
  GLboolean gl_arb_timer_query : 1;
  GLboolean gl_arb_transform_feedback2 : 1;
  GLboolean gl_arb_transform_feedback3 : 1;
  GLboolean gl_arb_transform_feedback_instanced : 1;
  GLboolean gl_arb_transpose_matrix : 1;
  GLboolean gl_arb_uniform_buffer_object : 1;
  GLboolean gl_arb_vertex_array_object : 1;
  GLboolean gl_arb_vertex_attrib_64bit : 1;
  GLboolean gl_arb_vertex_attrib_binding : 1;
  GLboolean gl_arb_vertex_blend : 1;
  GLboolean gl_arb_vertex_buffer_object : 1;
  GLboolean gl_arb_vertex_program : 1;
  GLboolean gl_arb_vertex_shader : 1;
  GLboolean gl_arb_vertex_type_2_10_10_10_rev : 1;
  GLboolean gl_arb_viewport_array : 1;
  GLboolean gl_arb_window_pos : 1;
  GLboolean gl_arm_mali_program_binary : 1;
  GLboolean gl_arm_mali_shader_binary : 1;
  GLboolean gl_ati_draw_buffers : 1;
  GLboolean gl_ati_element_array : 1;
  GLboolean gl_ati_envmap_bumpmap : 1;
  GLboolean gl_ati_fragment_shader : 1;
  GLboolean gl_ati_map_object_buffer : 1;
  GLboolean gl_ati_meminfo : 1;
  GLboolean gl_ati_pn_triangles : 1;
  GLboolean gl_ati_separate_stencil : 1;
  GLboolean gl_ati_text_fragment_shader : 1;
  GLboolean gl_ati_texture_compression_3dc : 1;
  GLboolean gl_ati_texture_env_combine3 : 1;
  GLboolean gl_ati_texture_float : 1;
  GLboolean gl_ati_texture_mirror_once : 1;
  GLboolean gl_ati_vertex_array_object : 1;
  GLboolean gl_ati_vertex_attrib_array_object : 1;
  GLboolean gl_ati_vertex_streams : 1;
  GLboolean gl_dmp_shader_binary : 1;
  GLboolean gl_ext_422_pixels : 1;
  GLboolean gl_ext_cg_shader : 1;
  GLboolean gl_ext_abgr : 1;
  GLboolean gl_ext_bgra : 1;
  GLboolean gl_ext_bindable_uniform : 1;
  GLboolean gl_ext_blend_color : 1;
  GLboolean gl_ext_blend_equation_separate : 1;
  GLboolean gl_ext_blend_func_separate : 1;
  GLboolean gl_ext_blend_minmax : 1;
  GLboolean gl_ext_blend_subtract : 1;
  GLboolean gl_ext_clip_volume_hint : 1;
  GLboolean gl_ext_cmyka : 1;
  GLboolean gl_ext_color_buffer_half_float : 1;
  GLboolean gl_ext_color_subtable : 1;
  GLboolean gl_ext_compiled_vertex_array : 1;
  GLboolean gl_ext_convolution : 1;
  GLboolean gl_ext_coordinate_frame : 1;
  GLboolean gl_ext_copy_texture : 1;
  GLboolean gl_ext_cull_vertex : 1;
  GLboolean gl_ext_debug_label : 1;
  GLboolean gl_ext_debug_marker : 1;
  GLboolean gl_ext_depth_bounds_test : 1;
  GLboolean gl_ext_direct_state_access : 1;
  GLboolean gl_ext_discard_framebuffer : 1;
  GLboolean gl_ext_draw_buffers2 : 1;
  GLboolean gl_ext_draw_instanced : 1;
  GLboolean gl_ext_draw_range_elements : 1;
  GLboolean gl_ext_fog_coord : 1;
  GLboolean gl_ext_fragment_lighting : 1;
  GLboolean gl_ext_framebuffer_blit : 1;
  GLboolean gl_ext_framebuffer_multisample : 1;
  GLboolean gl_ext_framebuffer_multisample_blit_scaled : 1;
  GLboolean gl_ext_framebuffer_object : 1;
  GLboolean gl_ext_framebuffer_srgb : 1;
  GLboolean gl_ext_geometry_shader4 : 1;
  GLboolean gl_ext_gpu_program_parameters : 1;
  GLboolean gl_ext_gpu_shader4 : 1;
  GLboolean gl_ext_histogram : 1;
  GLboolean gl_ext_index_func : 1;
  GLboolean gl_ext_index_material : 1;
  GLboolean gl_ext_light_texture : 1;
  GLboolean gl_ext_map_buffer_range : 1;
  GLboolean gl_ext_multi_draw_arrays : 1;
  GLboolean gl_ext_multisample : 1;
  GLboolean gl_ext_multisampled_render_to_texture : 1;
  GLboolean gl_ext_multiview_draw_buffers : 1;
  GLboolean gl_ext_occlusion_query_boolean : 1;
  GLboolean gl_ext_packed_depth_stencil : 1;
  GLboolean gl_ext_packed_float : 1;
  GLboolean gl_ext_packed_pixels : 1;
  GLboolean gl_ext_paletted_texture : 1;
  GLboolean gl_ext_pixel_buffer_object : 1;
  GLboolean gl_ext_pixel_transform : 1;
  GLboolean gl_ext_point_parameters : 1;
  GLboolean gl_ext_polygon_offset : 1;
  GLboolean gl_ext_provoking_vertex : 1;
  GLboolean gl_ext_read_format_bgra : 1;
  GLboolean gl_ext_rescale_normal : 1;
  GLboolean gl_ext_robustness : 1;
  GLboolean gl_ext_srgb : 1;
  GLboolean gl_ext_scene_marker : 1;
  GLboolean gl_ext_secondary_color : 1;
  GLboolean gl_ext_separate_shader_objects : 1;
  GLboolean gl_ext_separate_specular_color : 1;
  GLboolean gl_ext_shader_framebuffer_fetch : 1;
  GLboolean gl_ext_shader_image_load_store : 1;
  GLboolean gl_ext_shadow_samplers : 1;
  GLboolean gl_ext_shared_texture_palette : 1;
  GLboolean gl_ext_stencil_clear_tag : 1;
  GLboolean gl_ext_stencil_two_side : 1;
  GLboolean gl_ext_stencil_wrap : 1;
  GLboolean gl_ext_subtexture : 1;
  GLboolean gl_ext_texture : 1;
  GLboolean gl_ext_texture3d : 1;
  GLboolean gl_ext_texture_array : 1;
  GLboolean gl_ext_texture_buffer_object : 1;
  GLboolean gl_ext_texture_compression_latc : 1;
  GLboolean gl_ext_texture_compression_rgtc : 1;
  GLboolean gl_ext_texture_compression_s3tc : 1;
  GLboolean gl_ext_texture_cube_map : 1;
  GLboolean gl_ext_texture_edge_clamp : 1;
  GLboolean gl_ext_texture_env_combine : 1;
  GLboolean gl_ext_texture_env_dot3 : 1;
  GLboolean gl_ext_texture_filter_anisotropic : 1;
  GLboolean gl_ext_texture_format_bgra8888 : 1;
  GLboolean gl_ext_texture_integer : 1;
  GLboolean gl_ext_texture_lod_bias : 1;
  GLboolean gl_ext_texture_mirror_clamp : 1;
  GLboolean gl_ext_texture_object : 1;
  GLboolean gl_ext_texture_perturb_normal : 1;
  GLboolean gl_ext_texture_rectangle : 1;
  GLboolean gl_ext_texture_rg : 1;
  GLboolean gl_ext_texture_srgb : 1;
  GLboolean gl_ext_texture_srgb_decode : 1;
  GLboolean gl_ext_texture_shared_exponent : 1;
  GLboolean gl_ext_texture_snorm : 1;
  GLboolean gl_ext_texture_storage : 1;
  GLboolean gl_ext_texture_swizzle : 1;
  GLboolean gl_ext_texture_type_2_10_10_10_rev : 1;
  GLboolean gl_ext_timer_query : 1;
  GLboolean gl_ext_transform_feedback : 1;
  GLboolean gl_ext_unpack_subimage : 1;
  GLboolean gl_ext_vertex_array : 1;
  GLboolean gl_ext_vertex_attrib_64bit : 1;
  GLboolean gl_ext_vertex_shader : 1;
  GLboolean gl_ext_vertex_weighting : 1;
  GLboolean gl_ext_x11_sync_object : 1;
  GLboolean gl_fj_shader_binary_gccso : 1;
  GLboolean gl_gremedy_frame_terminator : 1;
  GLboolean gl_gremedy_string_marker : 1;
  GLboolean gl_hp_image_transform : 1;
  GLboolean gl_hp_occlusion_test : 1;
  GLboolean gl_ibm_cull_vertex : 1;
  GLboolean gl_ibm_multimode_draw_arrays : 1;
  GLboolean gl_ibm_rasterpos_clip : 1;
  GLboolean gl_ibm_static_data : 1;
  GLboolean gl_ibm_texture_mirrored_repeat : 1;
  GLboolean gl_ibm_vertex_array_lists : 1;
  GLboolean gl_img_multisampled_render_to_texture : 1;
  GLboolean gl_img_program_binary : 1;
  GLboolean gl_img_read_format : 1;
  GLboolean gl_img_shader_binary : 1;
  GLboolean gl_img_texture_compression_pvrtc : 1;
  GLboolean gl_img_texture_env_enhanced_fixed_function : 1;
  GLboolean gl_img_user_clip_plane : 1;
  GLboolean gl_ingr_blend_func_separate : 1;
  GLboolean gl_ingr_color_clamp : 1;
  GLboolean gl_ingr_interlace_read : 1;
  GLboolean gl_intel_parallel_arrays : 1;
  GLboolean gl_intel_texture_scissor : 1;
  GLboolean gl_khr_debug : 1;
  GLboolean gl_khr_texture_compression_astc_ldr : 1;
  GLboolean gl_ktx_buffer_region : 1;
  GLboolean gl_mesax_texture_stack : 1;
  GLboolean gl_mesa_pack_invert : 1;
  GLboolean gl_mesa_resize_buffers : 1;
  GLboolean gl_mesa_window_pos : 1;
  GLboolean gl_mesa_ycbcr_texture : 1;
  GLboolean gl_nvx_conditional_render : 1;
  GLboolean gl_nvx_gpu_memory_info : 1;
  GLboolean gl_nv_bindless_texture : 1;
  GLboolean gl_nv_compute_program5 : 1;
  GLboolean gl_nv_conditional_render : 1;
  GLboolean gl_nv_copy_depth_to_color : 1;
  GLboolean gl_nv_copy_image : 1;
  GLboolean gl_nv_coverage_sample : 1;
  GLboolean gl_nv_deep_texture3d : 1;
  GLboolean gl_nv_depth_buffer_float : 1;
  GLboolean gl_nv_depth_clamp : 1;
  GLboolean gl_nv_depth_nonlinear : 1;
  GLboolean gl_nv_depth_range_unclamped : 1;
  GLboolean gl_nv_draw_buffers : 1;
  GLboolean gl_nv_evaluators : 1;
  GLboolean gl_nv_explicit_multisample : 1;
  GLboolean gl_nv_fbo_color_attachments : 1;
  GLboolean gl_nv_fence : 1;
  GLboolean gl_nv_float_buffer : 1;
  GLboolean gl_nv_fog_distance : 1;
  GLboolean gl_nv_fragment_program : 1;
  GLboolean gl_nv_fragment_program2 : 1;
  GLboolean gl_nv_framebuffer_blit : 1;
  GLboolean gl_nv_framebuffer_multisample_coverage : 1;
  GLboolean gl_nv_geometry_program4 : 1;
  GLboolean gl_nv_gpu_program4 : 1;
  GLboolean gl_nv_gpu_program5 : 1;
  GLboolean gl_nv_gpu_shader5 : 1;
  GLboolean gl_nv_half_float : 1;
  GLboolean gl_nv_light_max_exponent : 1;
  GLboolean gl_nv_multisample_coverage : 1;
  GLboolean gl_nv_multisample_filter_hint : 1;
  GLboolean gl_nv_occlusion_query : 1;
  GLboolean gl_nv_packed_depth_stencil : 1;
  GLboolean gl_nv_parameter_buffer_object : 1;
  GLboolean gl_nv_path_rendering : 1;
  GLboolean gl_nv_pixel_data_range : 1;
  GLboolean gl_nv_point_sprite : 1;
  GLboolean gl_nv_present_video : 1;
  GLboolean gl_nv_primitive_restart : 1;
  GLboolean gl_nv_read_buffer : 1;
  GLboolean gl_nv_read_buffer_front : 1;
  GLboolean gl_nv_register_combiners : 1;
  GLboolean gl_nv_register_combiners2 : 1;
  GLboolean gl_nv_shader_buffer_load : 1;
  GLboolean gl_nv_tessellation_program5 : 1;
  GLboolean gl_nv_texgen_emboss : 1;
  GLboolean gl_nv_texgen_reflection : 1;
  GLboolean gl_nv_texture_barrier : 1;
  GLboolean gl_nv_texture_env_combine4 : 1;
  GLboolean gl_nv_texture_expand_normal : 1;
  GLboolean gl_nv_texture_multisample : 1;
  GLboolean gl_nv_texture_rectangle : 1;
  GLboolean gl_nv_texture_shader : 1;
  GLboolean gl_nv_texture_shader2 : 1;
  GLboolean gl_nv_texture_shader3 : 1;
  GLboolean gl_nv_transform_feedback : 1;
  GLboolean gl_nv_transform_feedback2 : 1;
  GLboolean gl_nv_vdpau_interop : 1;
  GLboolean gl_nv_vertex_array_range : 1;
  GLboolean gl_nv_vertex_array_range2 : 1;
  GLboolean gl_nv_vertex_attrib_integer_64bit : 1;
  GLboolean gl_nv_vertex_buffer_unified_memory : 1;
  GLboolean gl_nv_vertex_program : 1;
  GLboolean gl_nv_vertex_program2_option : 1;
  GLboolean gl_nv_vertex_program3 : 1;
  GLboolean gl_nv_vertex_program4 : 1;
  GLboolean gl_nv_video_capture : 1;
  GLboolean gl_oes_blend_equation_separate : 1;
  GLboolean gl_oes_blend_func_separate : 1;
  GLboolean gl_oes_blend_subtract : 1;
  GLboolean gl_oes_compressed_etc1_rgb8_texture : 1;
  GLboolean gl_oes_compressed_paletted_texture : 1;
  GLboolean gl_oes_depth_texture : 1;
  GLboolean gl_oes_draw_texture : 1;
  GLboolean gl_oes_element_index_uint : 1;
  GLboolean gl_oes_framebuffer_object : 1;
  GLboolean gl_oes_get_program_binary : 1;
  GLboolean gl_oes_mapbuffer : 1;
  GLboolean gl_oes_matrix_get : 1;
  GLboolean gl_oes_matrix_palette : 1;
  GLboolean gl_oes_packed_depth_stencil : 1;
  GLboolean gl_oes_point_size_array : 1;
  GLboolean gl_oes_point_sprite : 1;
  GLboolean gl_oes_read_format : 1;
  GLboolean gl_oes_required_internalformat : 1;
  GLboolean gl_oes_rgb8_rgba8 : 1;
  GLboolean gl_oes_single_precision : 1;
  GLboolean gl_oes_standard_derivatives : 1;
  GLboolean gl_oes_stencil1 : 1;
  GLboolean gl_oes_stencil4 : 1;
  GLboolean gl_oes_stencil8 : 1;
  GLboolean gl_oes_surfaceless_context : 1;
  GLboolean gl_oes_texture_3d : 1;
  GLboolean gl_oes_texture_cube_map : 1;
  GLboolean gl_oes_texture_mirrored_repeat : 1;
  GLboolean gl_oes_vertex_array_object : 1;
  GLboolean gl_oes_vertex_half_float : 1;
  GLboolean gl_oes_vertex_type_10_10_10_2 : 1;
  GLboolean gl_oml_interlace : 1;
  GLboolean gl_oml_resample : 1;
  GLboolean gl_oml_subsample : 1;
  GLboolean gl_pgi_misc_hints : 1;
  GLboolean gl_pgi_vertex_hints : 1;
  GLboolean gl_qcom_alpha_test : 1;
  GLboolean gl_qcom_binning_control : 1;
  GLboolean gl_qcom_driver_control : 1;
  GLboolean gl_qcom_extended_get : 1;
  GLboolean gl_qcom_extended_get2 : 1;
  GLboolean gl_qcom_perfmon_global_mode : 1;
  GLboolean gl_qcom_tiled_rendering : 1;
  GLboolean gl_qcom_writeonly_rendering : 1;
  GLboolean gl_regal_es1_0_compatibility : 1;
  GLboolean gl_regal_es1_1_compatibility : 1;
  GLboolean gl_regal_enable : 1;
  GLboolean gl_regal_error_string : 1;
  GLboolean gl_regal_extension_query : 1;
  GLboolean gl_regal_log : 1;
  GLboolean gl_rend_screen_coordinates : 1;
  GLboolean gl_s3_s3tc : 1;
  GLboolean gl_sgis_color_range : 1;
  GLboolean gl_sgis_detail_texture : 1;
  GLboolean gl_sgis_fog_function : 1;
  GLboolean gl_sgis_generate_mipmap : 1;
  GLboolean gl_sgis_multisample : 1;
  GLboolean gl_sgis_pixel_texture : 1;
  GLboolean gl_sgis_point_line_texgen : 1;
  GLboolean gl_sgis_point_parameters : 1;
  GLboolean gl_sgis_sharpen_texture : 1;
  GLboolean gl_sgis_texture4d : 1;
  GLboolean gl_sgis_texture_border_clamp : 1;
  GLboolean gl_sgis_texture_color_mask : 1;
  GLboolean gl_sgis_texture_edge_clamp : 1;
  GLboolean gl_sgis_texture_filter4 : 1;
  GLboolean gl_sgis_texture_lod : 1;
  GLboolean gl_sgix_async : 1;
  GLboolean gl_sgix_async_histogram : 1;
  GLboolean gl_sgix_async_pixel : 1;
  GLboolean gl_sgix_blend_alpha_minmax : 1;
  GLboolean gl_sgix_convolution_accuracy : 1;
  GLboolean gl_sgix_depth_texture : 1;
  GLboolean gl_sgix_flush_raster : 1;
  GLboolean gl_sgix_fog_offset : 1;
  GLboolean gl_sgix_fog_texture : 1;
  GLboolean gl_sgix_fragment_lighting : 1;
  GLboolean gl_sgix_framezoom : 1;
  GLboolean gl_sgix_igloo_interface : 1;
  GLboolean gl_sgix_instruments : 1;
  GLboolean gl_sgix_interlace : 1;
  GLboolean gl_sgix_list_priority : 1;
  GLboolean gl_sgix_pixel_texture : 1;
  GLboolean gl_sgix_polynomial_ffd : 1;
  GLboolean gl_sgix_reference_plane : 1;
  GLboolean gl_sgix_resample : 1;
  GLboolean gl_sgix_shadow : 1;
  GLboolean gl_sgix_shadow_ambient : 1;
  GLboolean gl_sgix_sprite : 1;
  GLboolean gl_sgix_tag_sample_buffer : 1;
  GLboolean gl_sgix_texture_coordinate_clamp : 1;
  GLboolean gl_sgix_texture_multi_buffer : 1;
  GLboolean gl_sgix_texture_range : 1;
  GLboolean gl_sgix_texture_scale_bias : 1;
  GLboolean gl_sgix_vertex_preclip_hint : 1;
  GLboolean gl_sgi_color_matrix : 1;
  GLboolean gl_sgi_color_table : 1;
  GLboolean gl_sgi_texture_color_table : 1;
  GLboolean gl_sunx_constant_data : 1;
  GLboolean gl_sun_convolution_border_modes : 1;
  GLboolean gl_sun_global_alpha : 1;
  GLboolean gl_sun_mesh_array : 1;
  GLboolean gl_sun_read_video_pixels : 1;
  GLboolean gl_sun_slice_accum : 1;
  GLboolean gl_sun_triangle_list : 1;
  GLboolean gl_sun_vertex : 1;
  GLboolean gl_viv_shader_binary : 1;
  GLboolean gl_win_phong_shading : 1;
  GLboolean gl_win_specular_fog : 1;
  GLboolean gl_win_swap_hint : 1;

#if REGAL_SYS_WGL
  GLboolean wgl_3dl_stereo_control : 1;
  GLboolean wgl_amd_gpu_association : 1;
  GLboolean wgl_arb_buffer_region : 1;
  GLboolean wgl_arb_create_context : 1;
  GLboolean wgl_arb_create_context_profile : 1;
  GLboolean wgl_arb_create_context_robustness : 1;
  GLboolean wgl_arb_extensions_string : 1;
  GLboolean wgl_arb_framebuffer_srgb : 1;
  GLboolean wgl_arb_make_current_read : 1;
  GLboolean wgl_arb_multisample : 1;
  GLboolean wgl_arb_pbuffer : 1;
  GLboolean wgl_arb_pixel_format : 1;
  GLboolean wgl_arb_pixel_format_float : 1;
  GLboolean wgl_arb_render_texture : 1;
  GLboolean wgl_arb_robustness_share_group_isolation : 1;
  GLboolean wgl_ati_pixel_format_float : 1;
  GLboolean wgl_ati_render_texture_rectangle : 1;
  GLboolean wgl_ext_create_context_es2_profile : 1;
  GLboolean wgl_ext_create_context_es_profile : 1;
  GLboolean wgl_ext_depth_float : 1;
  GLboolean wgl_ext_display_color_table : 1;
  GLboolean wgl_ext_extensions_string : 1;
  GLboolean wgl_ext_framebuffer_srgb : 1;
  GLboolean wgl_ext_make_current_read : 1;
  GLboolean wgl_ext_multisample : 1;
  GLboolean wgl_ext_pbuffer : 1;
  GLboolean wgl_ext_pixel_format : 1;
  GLboolean wgl_ext_pixel_format_packed_float : 1;
  GLboolean wgl_ext_swap_control : 1;
  GLboolean wgl_gdi : 1;
  GLboolean wgl_i3d_digital_video_control : 1;
  GLboolean wgl_i3d_gamma : 1;
  GLboolean wgl_i3d_genlock : 1;
  GLboolean wgl_i3d_image_buffer : 1;
  GLboolean wgl_i3d_swap_frame_lock : 1;
  GLboolean wgl_i3d_swap_frame_usage : 1;
  GLboolean wgl_nv_dx_interop : 1;
  GLboolean wgl_nv_copy_image : 1;
  GLboolean wgl_nv_float_buffer : 1;
  GLboolean wgl_nv_gpu_affinity : 1;
  GLboolean wgl_nv_multisample_coverage : 1;
  GLboolean wgl_nv_present_video : 1;
  GLboolean wgl_nv_render_depth_texture : 1;
  GLboolean wgl_nv_render_texture_rectangle : 1;
  GLboolean wgl_nv_swap_group : 1;
  GLboolean wgl_nv_vertex_array_range : 1;
  GLboolean wgl_nv_video_capture : 1;
  GLboolean wgl_nv_video_output : 1;
  GLboolean wgl_oml_sync_control : 1;
#endif

#if REGAL_SYS_GLX
  GLboolean glx_3dfx_multisample : 1;
  GLboolean glx_amd_gpu_association : 1;
  GLboolean glx_arb_create_context : 1;
  GLboolean glx_arb_create_context_profile : 1;
  GLboolean glx_arb_create_context_robustness : 1;
  GLboolean glx_arb_fbconfig_float : 1;
  GLboolean glx_arb_framebuffer_srgb : 1;
  GLboolean glx_arb_get_proc_address : 1;
  GLboolean glx_arb_multisample : 1;
  GLboolean glx_arb_robustness_share_group_isolation : 1;
  GLboolean glx_arb_vertex_buffer_object : 1;
  GLboolean glx_ati_pixel_format_float : 1;
  GLboolean glx_ati_render_texture : 1;
  GLboolean glx_ext_create_context_es2_profile : 1;
  GLboolean glx_ext_create_context_es_profile : 1;
  GLboolean glx_ext_fbconfig_packed_float : 1;
  GLboolean glx_ext_framebuffer_srgb : 1;
  GLboolean glx_ext_import_context : 1;
  GLboolean glx_ext_swap_control : 1;
  GLboolean glx_ext_swap_control_tear : 1;
  GLboolean glx_ext_texture_from_pixmap : 1;
  GLboolean glx_ext_visual_info : 1;
  GLboolean glx_ext_visual_rating : 1;
  GLboolean glx_intel_swap_event : 1;
  GLboolean glx_mesa_agp_offset : 1;
  GLboolean glx_mesa_copy_sub_buffer : 1;
  GLboolean glx_mesa_pixmap_colormap : 1;
  GLboolean glx_mesa_release_buffers : 1;
  GLboolean glx_mesa_set_3dfx_mode : 1;
  GLboolean glx_mesa_swap_control : 1;
  GLboolean glx_nv_copy_image : 1;
  GLboolean glx_nv_float_buffer : 1;
  GLboolean glx_nv_multisample_coverage : 1;
  GLboolean glx_nv_present_video : 1;
  GLboolean glx_nv_swap_group : 1;
  GLboolean glx_nv_vertex_array_range : 1;
  GLboolean glx_nv_video_capture : 1;
  GLboolean glx_nv_video_output : 1;
  GLboolean glx_oml_swap_method : 1;
  GLboolean glx_oml_sync_control : 1;
  GLboolean glx_sgis_blended_overlay : 1;
  GLboolean glx_sgis_color_range : 1;
  GLboolean glx_sgis_multisample : 1;
  GLboolean glx_sgis_shared_multisample : 1;
  GLboolean glx_sgix_fbconfig : 1;
  GLboolean glx_sgix_hyperpipe : 1;
  GLboolean glx_sgix_pbuffer : 1;
  GLboolean glx_sgix_swap_barrier : 1;
  GLboolean glx_sgix_swap_group : 1;
  GLboolean glx_sgix_video_resize : 1;
  GLboolean glx_sgix_visual_select_group : 1;
  GLboolean glx_sgi_cushion : 1;
  GLboolean glx_sgi_make_current_read : 1;
  GLboolean glx_sgi_swap_control : 1;
  GLboolean glx_sgi_video_sync : 1;
  GLboolean glx_sun_get_transparent_index : 1;
  GLboolean glx_sun_video_resize : 1;
#endif

#if REGAL_SYS_EGL
  GLboolean egl_angle_query_surface_pointer : 1;
  GLboolean egl_angle_surface_d3d_texture_2d_share_handle : 1;
  GLboolean egl_ext_create_context_robustness : 1;
  GLboolean egl_ext_multiview_window : 1;
  GLboolean egl_hi_colorformats : 1;
  GLboolean egl_img_context_priority : 1;
  GLboolean egl_khr_config_attribs : 1;
  GLboolean egl_khr_create_context : 1;
  GLboolean egl_khr_fence_sync : 1;
  GLboolean egl_khr_gl_texture_cubemap_image : 1;
  GLboolean egl_khr_image_base : 1;
  GLboolean egl_khr_image_pixmap : 1;
  GLboolean egl_khr_lock_surface : 1;
  GLboolean egl_khr_lock_surface2 : 1;
  GLboolean egl_khr_reusable_sync : 1;
  GLboolean egl_khr_stream : 1;
  GLboolean egl_khr_stream_consumer_gltexture : 1;
  GLboolean egl_khr_stream_cross_process_fd : 1;
  GLboolean egl_khr_stream_fifo : 1;
  GLboolean egl_khr_stream_producer_eglsurface : 1;
  GLboolean egl_khr_vg_parent_image : 1;
  GLboolean egl_khr_wait_sync : 1;
  GLboolean egl_mesa_drm_image : 1;
  GLboolean egl_nv_coverage_sample : 1;
  GLboolean egl_nv_coverage_sample_resolve : 1;
  GLboolean egl_nv_post_sub_buffer : 1;
  GLboolean egl_nv_sync : 1;
  GLboolean egl_nv_system_time : 1;
#endif

  GLuint maxVertexAttribs;
  GLuint maxVaryings;
};

REGAL_NAMESPACE_END

#endif // __REGAL_CONTEXT_INFO_H__
