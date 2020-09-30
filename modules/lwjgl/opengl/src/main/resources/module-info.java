/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
module org.lwjgl.opengl {
    requires transitive org.lwjgl;
    requires static org.lwjgl.glfw;
    requires static org.lwjgl.input;

    exports org.lwjgl.opengl;
}
