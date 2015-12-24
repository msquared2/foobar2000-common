#include "ui_extension.h"

namespace columns_ui
{
	namespace fcl
	{
		namespace groups
		{
			// {1979B677-17EF-4423-9469-1139A11BD687}
			const GUID layout = 
			{ 0x1979b677, 0x17ef, 0x4423, { 0x94, 0x69, 0x11, 0x39, 0xa1, 0x1b, 0xd6, 0x87 } };
			// {F1181B34-8848-43d0-9296-24484C1F5BF1}
			const GUID toolbars = 
			{ 0xf1181b34, 0x8848, 0x43d0, { 0x92, 0x96, 0x24, 0x48, 0x4c, 0x1f, 0x5b, 0xf1 } };
			// {DD5158AE-C8ED-42d0-89E3-EF1B197FFCAF}
			const GUID colours_and_fonts = 
			{ 0xdd5158ae, 0xc8ed, 0x42d0, { 0x89, 0xe3, 0xef, 0x1b, 0x19, 0x7f, 0xfc, 0xaf } };
			// {2A8E63A4-0F8E-459d-B752-874E38658A6C}
			const GUID title_scripts = 
			{ 0x2a8e63a4, 0xf8e, 0x459d, { 0xb7, 0x52, 0x87, 0x4e, 0x38, 0x65, 0x8a, 0x6c } };
		}
		// {04FC2444-4591-4f33-AE93-D61DF3DC32AD}
		const GUID dataset::class_guid = 
		{ 0x4fc2444, 0x4591, 0x4f33, { 0xae, 0x93, 0xd6, 0x1d, 0xf3, 0xdc, 0x32, 0xad } };
		// {78DEEA88-A3CB-47c7-95DE-39D6C81509E9}
		const GUID group::class_guid = 
		{ 0x78deea88, 0xa3cb, 0x47c7, { 0x95, 0xde, 0x39, 0xd6, 0xc8, 0x15, 0x9, 0xe9 } };
	}
	namespace toolbars
	{
		// {D8E65660-64ED-42e7-850B-31D828C25294}
		const GUID guid_buttons = 
		{ 0xd8e65660, 0x64ed, 0x42e7, { 0x85, 0xb, 0x31, 0xd8, 0x28, 0xc2, 0x52, 0x94 } };
		// {76E6DB50-0DE3-4f30-A7E4-93FD628B1401}
		const GUID guid_menu = 
		{ 0x76e6db50, 0xde3, 0x4f30, { 0xa7, 0xe4, 0x93, 0xfd, 0x62, 0x8b, 0x14, 0x1 } };
		// {ABA09E7E-9C95-443e-BDFC-049D66B324A0}
		const GUID guid_playback_order = 
		{ 0xaba09e7e, 0x9c95, 0x443e, { 0xbd, 0xfc, 0x4, 0x9d, 0x66, 0xb3, 0x24, 0xa0 } };
		// {D947777C-94C7-409a-B02C-9B0EB9E374FA}
		const GUID guid_spectrum_analyser = 
		{ 0xd947777c, 0x94c7, 0x409a, { 0xb0, 0x2c, 0x9b, 0xe, 0xb9, 0xe3, 0x74, 0xfa } };
		// {678FE380-ABBB-4c72-A0B3-72E769671125}
		const GUID guid_seek_bar = 
		{ 0x678fe380, 0xabbb, 0x4c72, { 0xa0, 0xb3, 0x72, 0xe7, 0x69, 0x67, 0x11, 0x25 } };
		// {B3259290-CB68-4d37-B0F1-8094862A9524}
		const GUID guid_volume_control = 
		{ 0xb3259290, 0xcb68, 0x4d37, { 0xb0, 0xf1, 0x80, 0x94, 0x86, 0x2a, 0x95, 0x24 } };
		// {6E3B8B17-AEBD-40d2-A10F-9D3ACF74F091}
		const GUID guid_filter_search_bar = 
		{ 0x6e3b8b17, 0xaebd, 0x40d2, { 0xa1, 0xf, 0x9d, 0x3a, 0xcf, 0x74, 0xf0, 0x91 } };
	}
	namespace panels
	{
		// {C2CF9425-0540-4579-AB3F-13E217663D9B}
		const GUID guid_playlist_switcher = 
		{ 0xc2cf9425, 0x540, 0x4579, { 0xab, 0x3f, 0x13, 0xe2, 0x17, 0x66, 0x3d, 0x9b } };
		// {ABB72D0D-DBF0-4bba-8C68-3357EBE07A4D}
		const GUID guid_playlist_tabs = 
		{ 0xabb72d0d, 0xdbf0, 0x4bba, { 0x8c, 0x68, 0x33, 0x57, 0xeb, 0xe0, 0x7a, 0x4d } };
		// {F20BED8F-225B-46c3-9FC7-454CEDB6CDAD}
		const GUID guid_playlist_view = 
		{ 0xf20bed8f, 0x225b, 0x46c3, { 0x9f, 0xc7, 0x45, 0x4c, 0xed, 0xb6, 0xcd, 0xad } };
		// {77653A44-66D1-49e0-9A7A-1C71898C0441}
		const GUID guid_vertical_splitter = 
		{ 0x77653a44, 0x66d1, 0x49e0, { 0x9a, 0x7a, 0x1c, 0x71, 0x89, 0x8c, 0x4, 0x41 } };
		// {8FA0BC24-882A-4fff-8A3B-215EA7FBD07F}
		const GUID guid_horizontal_splitter = 
		{ 0x8fa0bc24, 0x882a, 0x4fff, { 0x8a, 0x3b, 0x21, 0x5e, 0xa7, 0xfb, 0xd0, 0x7f } };
		// {FB059406-5F14-4bd0-8A11-4242854CBBA5}
		const GUID guid_filter = 
		{ 0xfb059406, 0xdddd, 0x4bd0, { 0x8a, 0x11, 0x42, 0x42, 0x85, 0x4c, 0xbb, 0xa5 } };
		// {DEEAD6EC-F0B9-4919-B16D-280AEDDE7343}
		const GUID guid_artwork_view = 
		{ 0xdeead6ec, 0xf0b9, 0x4919, { 0xb1, 0x6d, 0x28, 0xa, 0xed, 0xde, 0x73, 0x43 } };
		// {FB059406-5F14-4bd0-8A11-4242854CBBA5}
		const GUID guid_playlist_view_v2 = 
		{ 0xfb059406, 0x5f14, 0x4bd0, { 0x8a, 0x11, 0x42, 0x42, 0x85, 0x4c, 0xbb, 0xa5 } };
		// {59B4F428-26A5-4a51-89E5-3945D327B4CB}
		const GUID guid_item_details = 
		{ 0x59b4f428, 0x26a5, 0x4a51, { 0x89, 0xe5, 0x39, 0x45, 0xd3, 0x27, 0xb4, 0xcb } };
		// {8F6069CD-2E36-4ead-B171-93F3DFF0073A}
		const GUID guid_item_properties = 
		{ 0x8f6069cd, 0x2e36, 0x4ead, { 0xb1, 0x71, 0x93, 0xf3, 0xdf, 0xf0, 0x7, 0x3a } };
	}
	namespace visualisations
	{
		// {D947777C-94C7-409a-B02C-9B0EB9E374FA}
		const GUID guid_spectrum_analyser = 
		{ 0xd947777c, 0x94c7, 0x409a, { 0xb0, 0x2c, 0x9b, 0xe, 0xb9, 0xe3, 0x74, 0xfa } };
	}
	namespace strings
	{
		// {493D419A-CBB3-4b8a-8FB8-28DE2AE2F36F}
		const GUID guid_global_variables = 
		{ 0x493d419a, 0xcbb3, 0x4b8a, { 0x8f, 0xb8, 0x28, 0xde, 0x2a, 0xe2, 0xf3, 0x6f } };
	}
	// {28992DF0-1EE2-4e06-AC86-BF4F266E2E56}
	const GUID control::class_guid = 
	{ 0x28992df0, 0x1ee2, 0x4e06, { 0xac, 0x86, 0xbf, 0x4f, 0x26, 0x6e, 0x2e, 0x56 } };

	// {EC705736-4C68-44fe-B240-74793B40FFC0}
	const GUID colours::manager::class_guid = 
	{ 0xec705736, 0x4c68, 0x44fe, { 0xb2, 0x40, 0x74, 0x79, 0x3b, 0x40, 0xff, 0xc0 } };

	// {E1979E50-B496-47e9-88CC-04FFF19024D0}
	const GUID colours::manager_instance::class_guid = 
	{ 0xe1979e50, 0xb496, 0x47e9, { 0x88, 0xcc, 0x4, 0xff, 0xf1, 0x90, 0x24, 0xd0 } };
	
	// {05B277E9-83C3-4f75-B92F-66C1049D0B68}
	const GUID fonts::manager::class_guid = 
	{ 0x5b277e9, 0x83c3, 0x4f75, { 0xb9, 0x2f, 0x66, 0xc1, 0x4, 0x9d, 0xb, 0x68 } };
	
	// {A4AE2971-64C8-4118-8E2A-EFDC37A59372}
	const GUID colours::client::class_guid =
	{ 0xa4ae2971, 0x64c8, 0x4118, { 0x8e, 0x2a, 0xef, 0xdc, 0x37, 0xa5, 0x93, 0x72 } };

	// {3FBCC2B0-978E-406f-A446-4677E0D4C58E}
	const GUID fonts::client::class_guid =
	{ 0x3fbcc2b0, 0x978e, 0x406f, { 0xa4, 0x46, 0x46, 0x77, 0xe0, 0xd4, 0xc5, 0x8e } };

	bool fonts::client::create_by_guid (const GUID & p_guid, client::ptr & p_out)
	{
		service_enum_t<client> p_enum;
		client::ptr ptr;
		while (p_enum.next(ptr))
		{
			if (ptr->get_client_guid() == p_guid)
			{
				p_out = ptr;
				return true;
			}
		}
		return false;
	}
}