//
//  Shader.fsh
//  3D App
//
//  Created by Simon Bøgh on 17/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
