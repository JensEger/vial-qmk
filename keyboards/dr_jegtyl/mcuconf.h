// Config for the Trackball

#pragma once

#include_next <mcuconf.h>

// Set up SPI
#undef RP_SPI_USE_SPI0
#define RP_SPI_USE_SPI0 FALSE

#undef RP_SPI_USE_SPI1
#define RP_SPI_USE_SPI1 TRUE