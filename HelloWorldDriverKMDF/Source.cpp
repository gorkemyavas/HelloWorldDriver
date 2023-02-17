#include <fltKernel.h>

extern "C" {
	void HelloWorldDriverKMDFUnLoad(_In_ struct _DRIVER_OBJECT* DriverObject) {
		UNREFERENCED_PARAMETER(DriverObject);
	}

	NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
		UNREFERENCED_PARAMETER(RegistryPath);

		DriverObject->DriverUnload = HelloWorldDriverKMDFUnLoad;
		DbgPrint("Hello World \r \n");

		return STATUS_SUCCESS;

	}
}