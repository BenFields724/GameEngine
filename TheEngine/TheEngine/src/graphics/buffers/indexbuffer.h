#pragma once

#include <GL\glew.h>

namespace sparky {
	namespace graphics {

		class IndexBuffer
		{
		private:
			GLuint m_BufferID;
			GLuint m_Count;
		public:
			IndexBuffer(GLushort* data, GLsizei count);

			void bind() const;
			void unbind() const;

			GLuint getCount() const { return m_Count; }
		};


	}
}