//
//  CCIDoAction.cpp
//  SwfTest
//
//  Created by Wu Tong on 13-4-25.
//
//

#include "CCIDoAction.h"
NS_CC_EXT_BEGIN

bool CCIDoAction::initWithReader(cocos2d::extension::CCIBufferReader *reader, int tagType, int tagLength){
    CCIMovieTag::initWithReader(reader, tagType, tagLength);
    
    
    return true;
}
NS_CC_EXT_END