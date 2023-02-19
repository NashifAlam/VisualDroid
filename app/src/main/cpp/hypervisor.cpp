// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("hypervisor");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("hypervisor")
//      }
//    }

class preprocessor{
    private:
        int initString = 100000000;
        int TyreString = 100000000, BrakeString = 100000000, DoorString = 100000000, ToggleString = 100000000, DiagnosticString = 100000000;

    public:
        int rxParser(int Tyre, int Brake, int Door, int Toggle, int Diagnostics);
        void valueTyre(int Tyre);
        void valueBrake(int Brake);
        void valueDoor(int Door);
        void valueToggle(int Toggle);
        void valueDiagnostics(int Toggle);

};