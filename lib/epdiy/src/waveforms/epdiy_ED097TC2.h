const int epd_wp_epdiy_ED097TC2_1_0_times[5] = { 1000,1000,1000,1000,1000 };
const uint8_t epd_wp_epdiy_ED097TC2_1_0_data[5][16][4] = {{{0x15,0x55,0x55,0x55},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xa8}},{{0x15,0x55,0x55,0x55},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xa8}},{{0x15,0x55,0x55,0x55},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xa8}},{{0x15,0x55,0x55,0x55},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xa8}},{{0x15,0x55,0x55,0x55},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xa8}}};
const EpdWaveformPhases epd_wp_epdiy_ED097TC2_1_0 = { .phases = 5, .phase_times = &epd_wp_epdiy_ED097TC2_1_0_times[0], .luts = (const uint8_t*)&epd_wp_epdiy_ED097TC2_1_0_data[0] };
const EpdWaveformPhases* epd_wm_epdiy_ED097TC2_1_ranges[1] = { &epd_wp_epdiy_ED097TC2_1_0 };
const EpdWaveformMode epd_wm_epdiy_ED097TC2_1 = { .type = 1, .temp_ranges = 1, .range_data = &epd_wm_epdiy_ED097TC2_1_ranges[0] };
const int epd_wp_epdiy_ED097TC2_2_0_times[30] = { 15,8,8,8,8,8,10,10,10,10,20,20,50,100,200,15,8,4,3,3,3,3,6,6,6,6,15,20,50,150 };
const uint8_t epd_wp_epdiy_ED097TC2_2_0_data[30][16][4] = {{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01}},{{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05}},{{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15}},{{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55}},{{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55}},{{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55}},{{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55}},{{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55}},{{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55}},{{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55}},{{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55}},{{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55}},{{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55}},{{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55}},{{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55}},{{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa}}};
const EpdWaveformPhases epd_wp_epdiy_ED097TC2_2_0 = { .phases = 30, .phase_times = &epd_wp_epdiy_ED097TC2_2_0_times[0], .luts = (const uint8_t*)&epd_wp_epdiy_ED097TC2_2_0_data[0] };
const EpdWaveformPhases* epd_wm_epdiy_ED097TC2_2_ranges[1] = { &epd_wp_epdiy_ED097TC2_2_0 };
const EpdWaveformMode epd_wm_epdiy_ED097TC2_2 = { .type = 2, .temp_ranges = 1, .range_data = &epd_wm_epdiy_ED097TC2_2_ranges[0] };
const int epd_wp_epdiy_ED097TC2_5_0_times[30] = { 15,8,8,8,8,8,10,10,10,10,20,20,50,100,200,15,8,4,3,3,3,3,6,6,6,6,15,20,50,150 };
const uint8_t epd_wp_epdiy_ED097TC2_5_0_data[30][16][4] = {{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x05},{0x00,0x00,0x00,0x04}},{{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x15},{0x00,0x00,0x00,0x14}},{{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x55},{0x00,0x00,0x00,0x54}},{{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x55},{0x00,0x00,0x01,0x54}},{{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x55},{0x00,0x00,0x05,0x54}},{{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x55},{0x00,0x00,0x15,0x54}},{{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x55},{0x00,0x00,0x55,0x54}},{{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x55},{0x00,0x01,0x55,0x54}},{{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x55},{0x00,0x05,0x55,0x54}},{{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x55},{0x00,0x15,0x55,0x54}},{{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x55},{0x00,0x55,0x55,0x54}},{{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x55},{0x01,0x55,0x55,0x54}},{{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x55},{0x05,0x55,0x55,0x54}},{{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x55},{0x15,0x55,0x55,0x54}},{{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xaa},{0xaa,0xaa,0xaa,0xa8}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0xaa,0xaa,0xaa,0xa8}}};
const EpdWaveformPhases epd_wp_epdiy_ED097TC2_5_0 = { .phases = 30, .phase_times = &epd_wp_epdiy_ED097TC2_5_0_times[0], .luts = (const uint8_t*)&epd_wp_epdiy_ED097TC2_5_0_data[0] };
const EpdWaveformPhases* epd_wm_epdiy_ED097TC2_5_ranges[1] = { &epd_wp_epdiy_ED097TC2_5_0 };
const EpdWaveformMode epd_wm_epdiy_ED097TC2_5 = { .type = 5, .temp_ranges = 1, .range_data = &epd_wm_epdiy_ED097TC2_5_ranges[0] };
const int epd_wp_epdiy_ED097TC2_16_0_times[15] = { 15,8,8,8,8,8,10,10,10,10,20,20,50,100,200 };
const uint8_t epd_wp_epdiy_ED097TC2_16_0_data[15][16][4] = {{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x01},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00}}};
const EpdWaveformPhases epd_wp_epdiy_ED097TC2_16_0 = { .phases = 15, .phase_times = &epd_wp_epdiy_ED097TC2_16_0_times[0], .luts = (const uint8_t*)&epd_wp_epdiy_ED097TC2_16_0_data[0] };
const EpdWaveformPhases* epd_wm_epdiy_ED097TC2_16_ranges[1] = { &epd_wp_epdiy_ED097TC2_16_0 };
const EpdWaveformMode epd_wm_epdiy_ED097TC2_16 = { .type = 16, .temp_ranges = 1, .range_data = &epd_wm_epdiy_ED097TC2_16_ranges[0] };
const int epd_wp_epdiy_ED097TC2_17_0_times[15] = { 15,8,4,3,3,3,3,6,6,6,6,15,20,50,150 };
const uint8_t epd_wp_epdiy_ED097TC2_17_0_data[15][16][4] = {{{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}},{{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x00,0x00,0x00,0x00},{0x80,0x00,0x00,0x00}}};
const EpdWaveformPhases epd_wp_epdiy_ED097TC2_17_0 = { .phases = 15, .phase_times = &epd_wp_epdiy_ED097TC2_17_0_times[0], .luts = (const uint8_t*)&epd_wp_epdiy_ED097TC2_17_0_data[0] };
const EpdWaveformPhases* epd_wm_epdiy_ED097TC2_17_ranges[1] = { &epd_wp_epdiy_ED097TC2_17_0 };
const EpdWaveformMode epd_wm_epdiy_ED097TC2_17 = { .type = 17, .temp_ranges = 1, .range_data = &epd_wm_epdiy_ED097TC2_17_ranges[0] };
const EpdWaveformTempInterval epdiy_ED097TC2_intervals[1] = { { .min = 20, .max = 30 } };
const EpdWaveformMode* epdiy_ED097TC2_modes[5] = { &epd_wm_epdiy_ED097TC2_1,&epd_wm_epdiy_ED097TC2_2,&epd_wm_epdiy_ED097TC2_5,&epd_wm_epdiy_ED097TC2_16,&epd_wm_epdiy_ED097TC2_17 };
const EpdWaveform epdiy_ED097TC2 = { .num_modes = 5, .num_temp_ranges = 1, .mode_data = &epdiy_ED097TC2_modes[0], .temp_intervals = &epdiy_ED097TC2_intervals[0] };
