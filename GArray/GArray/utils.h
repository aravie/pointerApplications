#pragma once
//create a copy algorithm using function template
template<typename SourceT, typename DestT>
DestT Copy(SourceT begin, SourceT end, DestT dest) {
	for (; begin != end; ++begin, ++dest)
		*dest = *begin;
	return dest;
}

