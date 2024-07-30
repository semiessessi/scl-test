namespace SCL
{
int EntryPoint(const int argumentCount, const char* const* const arguments);
}

int main(const int argumentCount, const char* const* const arguments)
{
	return SCL::EntryPoint(argumentCount, arguments);
}
