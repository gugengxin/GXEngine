//
//  GOWHash.h
//  GX
//
//  Created by Gengxin Gu on 16/4/19.
//  Copyright © 2016年 Gengxin Gu. All rights reserved.
//

#ifndef GOWHash_h
#define GOWHash_h

#include "GXPrefix.h"

GX_NS_START

class GHashCode {
public:
    
private:
    guint32 m_CodeA;
    typedef struct _Code {
        guint32 codeA;
        guint32 codeB;
        guint32 codeC;
    } Code;
    
    static Code compute(const gchar* str);
    static Code compute(const gchar* str,gint len);
    static bool compare(Code& code0,Code& code1);
};


GX_NS_END

#endif /* GOWHash_h */
