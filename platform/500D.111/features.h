#include "all_features.h"

#define FEATURE_LV_3RD_PARTY_FLASH

// audio controls kinda work, but very limited
#undef FEATURE_DIGITAL_GAIN
#undef FEATURE_AGC_TOGGLE
#undef FEATURE_WIND_FILTER
#undef FEATURE_INPUT_SOURCE
#undef FEATURE_MIC_POWER
#undef FEATURE_HEADPHONE_MONITORING
#undef FEATURE_HEADPHONE_OUTPUT_VOLUME

#define FEATURE_INTERMEDIATE_ISO_PHOTO_DISPLAY

#undef FEATURE_MOVIE_RESTART /* https://bitbucket.org/hudson/magic-lantern/issue/1008/500d-movie-restart-function-is-not-working */

#define FEATURE_REC_NOTIFY_BEEP

/* Enable focus peaking display filter for Video AF sharpness scoring.
   Only runs when Video AF is enabled during recording. */
#define FEATURE_FOCUS_PEAK_DISP_FILTER
