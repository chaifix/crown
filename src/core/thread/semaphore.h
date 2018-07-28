/*
 * Copyright (c) 2012-2018 Daniele Bartolini and individual contributors.
 * License: https://github.com/dbartolini/crown/blob/master/LICENSE
 */

#pragma once

#include "core/platform.h"
#include "core/thread/mutex.h"

namespace crown
{
/// Semaphore.
///
/// @ingroup Thread.
struct Semaphore
{
	CE_ALIGN_DECL(16, u8 _data[128]);

	///
	Semaphore();

	///
	~Semaphore();

	///
	Semaphore(const Semaphore&) = delete;

	///
	Semaphore& operator=(const Semaphore&) = delete;

	///
	void post(u32 count = 1);

	///
	void wait();
};

} // namespace crown
