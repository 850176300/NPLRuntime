
#ifndef __CC_IMAGE_H__
#define __CC_IMAGE_H__

#include "platform/PlatformMacro.h"
#include <string>

NS_CC_BEGIN

class Image
{
public:
    bool initWithRawData(const unsigned char * data, ssize_t dataLen, int width, int height, int bitsPerComponent, bool preMulti = false);
    bool saveToFile(const std::string &filename, bool isToRGB = true);

};

NS_CC_END

#endif