/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
package org.lwjgl.vulkan;

import javax.annotation.*;

import java.nio.*;

import org.lwjgl.*;
import org.lwjgl.system.*;

import static org.lwjgl.system.MemoryUtil.*;
import static org.lwjgl.system.MemoryStack.*;

/**
 * See {@link VkInputAttachmentAspectReference}.
 * 
 * <h3>Layout</h3>
 * 
 * <pre><code>
 * struct VkInputAttachmentAspectReferenceKHR {
 *     uint32_t subpass;
 *     uint32_t inputAttachmentIndex;
 *     VkImageAspectFlags aspectMask;
 * }</code></pre>
 */
public class VkInputAttachmentAspectReferenceKHR extends VkInputAttachmentAspectReference {

    /**
     * Creates a {@link VkInputAttachmentAspectReferenceKHR} instance at the current position of the specified {@link ByteBuffer} container. Changes to the buffer's content will be
     * visible to the struct instance and vice versa.
     *
     * <p>The created instance holds a strong reference to the container object.</p>
     */
    public VkInputAttachmentAspectReferenceKHR(ByteBuffer container) {
        super(container);
    }

    /** Sets the specified value to the {@code subpass} field. */
    @Override
    public VkInputAttachmentAspectReferenceKHR subpass(@NativeType("uint32_t") int value) { nsubpass(address(), value); return this; }
    /** Sets the specified value to the {@code inputAttachmentIndex} field. */
    @Override
    public VkInputAttachmentAspectReferenceKHR inputAttachmentIndex(@NativeType("uint32_t") int value) { ninputAttachmentIndex(address(), value); return this; }
    /** Sets the specified value to the {@code aspectMask} field. */
    @Override
    public VkInputAttachmentAspectReferenceKHR aspectMask(@NativeType("VkImageAspectFlags") int value) { naspectMask(address(), value); return this; }

    /** Initializes this struct with the specified values. */
    @Override
    public VkInputAttachmentAspectReferenceKHR set(
        int subpass,
        int inputAttachmentIndex,
        int aspectMask
    ) {
        subpass(subpass);
        inputAttachmentIndex(inputAttachmentIndex);
        aspectMask(aspectMask);

        return this;
    }

    /**
     * Copies the specified struct data to this struct.
     *
     * @param src the source struct
     *
     * @return this struct
     */
    public VkInputAttachmentAspectReferenceKHR set(VkInputAttachmentAspectReferenceKHR src) {
        memCopy(src.address(), address(), SIZEOF);
        return this;
    }

    // -----------------------------------

    /** Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance allocated with {@link MemoryUtil#memAlloc memAlloc}. The instance must be explicitly freed. */
    public static VkInputAttachmentAspectReferenceKHR malloc() {
        return wrap(VkInputAttachmentAspectReferenceKHR.class, nmemAllocChecked(SIZEOF));
    }

    /** Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance allocated with {@link MemoryUtil#memCalloc memCalloc}. The instance must be explicitly freed. */
    public static VkInputAttachmentAspectReferenceKHR calloc() {
        return wrap(VkInputAttachmentAspectReferenceKHR.class, nmemCallocChecked(1, SIZEOF));
    }

    /** Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance allocated with {@link BufferUtils}. */
    public static VkInputAttachmentAspectReferenceKHR create() {
        ByteBuffer container = BufferUtils.createByteBuffer(SIZEOF);
        return wrap(VkInputAttachmentAspectReferenceKHR.class, memAddress(container), container);
    }

    /** Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance for the specified memory address. */
    public static VkInputAttachmentAspectReferenceKHR create(long address) {
        return wrap(VkInputAttachmentAspectReferenceKHR.class, address);
    }

    /** Like {@link #create(long) create}, but returns {@code null} if {@code address} is {@code NULL}. */
    @Nullable
    public static VkInputAttachmentAspectReferenceKHR createSafe(long address) {
        return address == NULL ? null : wrap(VkInputAttachmentAspectReferenceKHR.class, address);
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance allocated with {@link MemoryUtil#memAlloc memAlloc}. The instance must be explicitly freed.
     *
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer malloc(int capacity) {
        return wrap(Buffer.class, nmemAllocChecked(__checkMalloc(capacity, SIZEOF)), capacity);
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance allocated with {@link MemoryUtil#memCalloc memCalloc}. The instance must be explicitly freed.
     *
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer calloc(int capacity) {
        return wrap(Buffer.class, nmemCallocChecked(capacity, SIZEOF), capacity);
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance allocated with {@link BufferUtils}.
     *
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer create(int capacity) {
        ByteBuffer container = __create(capacity, SIZEOF);
        return wrap(Buffer.class, memAddress(container), capacity, container);
    }

    /**
     * Create a {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance at the specified memory.
     *
     * @param address  the memory address
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer create(long address, int capacity) {
        return wrap(Buffer.class, address, capacity);
    }

    /** Like {@link #create(long, int) create}, but returns {@code null} if {@code address} is {@code NULL}. */
    @Nullable
    public static VkInputAttachmentAspectReferenceKHR.Buffer createSafe(long address, int capacity) {
        return address == NULL ? null : wrap(Buffer.class, address, capacity);
    }

    // -----------------------------------

    /** Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance allocated on the thread-local {@link MemoryStack}. */
    public static VkInputAttachmentAspectReferenceKHR mallocStack() {
        return mallocStack(stackGet());
    }

    /** Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance allocated on the thread-local {@link MemoryStack} and initializes all its bits to zero. */
    public static VkInputAttachmentAspectReferenceKHR callocStack() {
        return callocStack(stackGet());
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance allocated on the specified {@link MemoryStack}.
     *
     * @param stack the stack from which to allocate
     */
    public static VkInputAttachmentAspectReferenceKHR mallocStack(MemoryStack stack) {
        return wrap(VkInputAttachmentAspectReferenceKHR.class, stack.nmalloc(ALIGNOF, SIZEOF));
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR} instance allocated on the specified {@link MemoryStack} and initializes all its bits to zero.
     *
     * @param stack the stack from which to allocate
     */
    public static VkInputAttachmentAspectReferenceKHR callocStack(MemoryStack stack) {
        return wrap(VkInputAttachmentAspectReferenceKHR.class, stack.ncalloc(ALIGNOF, 1, SIZEOF));
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance allocated on the thread-local {@link MemoryStack}.
     *
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer mallocStack(int capacity) {
        return mallocStack(capacity, stackGet());
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance allocated on the thread-local {@link MemoryStack} and initializes all its bits to zero.
     *
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer callocStack(int capacity) {
        return callocStack(capacity, stackGet());
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance allocated on the specified {@link MemoryStack}.
     *
     * @param stack the stack from which to allocate
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer mallocStack(int capacity, MemoryStack stack) {
        return wrap(Buffer.class, stack.nmalloc(ALIGNOF, capacity * SIZEOF), capacity);
    }

    /**
     * Returns a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance allocated on the specified {@link MemoryStack} and initializes all its bits to zero.
     *
     * @param stack the stack from which to allocate
     * @param capacity the buffer capacity
     */
    public static VkInputAttachmentAspectReferenceKHR.Buffer callocStack(int capacity, MemoryStack stack) {
        return wrap(Buffer.class, stack.ncalloc(ALIGNOF, capacity, SIZEOF), capacity);
    }

    // -----------------------------------

    /** An array of {@link VkInputAttachmentAspectReferenceKHR} structs. */
    public static class Buffer extends VkInputAttachmentAspectReference.Buffer {

        private static final VkInputAttachmentAspectReferenceKHR ELEMENT_FACTORY = VkInputAttachmentAspectReferenceKHR.create(-1L);

        /**
         * Creates a new {@link VkInputAttachmentAspectReferenceKHR.Buffer} instance backed by the specified container.
         *
         * Changes to the container's content will be visible to the struct buffer instance and vice versa. The two buffers' position, limit, and mark values
         * will be independent. The new buffer's position will be zero, its capacity and its limit will be the number of bytes remaining in this buffer divided
         * by {@link VkInputAttachmentAspectReferenceKHR#SIZEOF}, and its mark will be undefined.
         *
         * <p>The created buffer instance holds a strong reference to the container object.</p>
         */
        public Buffer(ByteBuffer container) {
            super(container);
        }

        public Buffer(long address, int cap) {
            super(address, null, -1, 0, cap, cap);
        }

        Buffer(long address, @Nullable ByteBuffer container, int mark, int pos, int lim, int cap) {
            super(address, container, mark, pos, lim, cap);
        }

        @Override
        protected Buffer self() {
            return this;
        }

        @Override
        protected VkInputAttachmentAspectReferenceKHR getElementFactory() {
            return ELEMENT_FACTORY;
        }

        /** Sets the specified value to the {@code subpass} field. */
        @Override
        public VkInputAttachmentAspectReferenceKHR.Buffer subpass(@NativeType("uint32_t") int value) { VkInputAttachmentAspectReferenceKHR.nsubpass(address(), value); return this; }
        /** Sets the specified value to the {@code inputAttachmentIndex} field. */
        @Override
        public VkInputAttachmentAspectReferenceKHR.Buffer inputAttachmentIndex(@NativeType("uint32_t") int value) { VkInputAttachmentAspectReferenceKHR.ninputAttachmentIndex(address(), value); return this; }
        /** Sets the specified value to the {@code aspectMask} field. */
        @Override
        public VkInputAttachmentAspectReferenceKHR.Buffer aspectMask(@NativeType("VkImageAspectFlags") int value) { VkInputAttachmentAspectReferenceKHR.naspectMask(address(), value); return this; }

    }

}