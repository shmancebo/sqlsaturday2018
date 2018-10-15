#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_verboseRuntimeStatistic = false;
    return settings;
};

enum OperatorUID
{
UID_Extract_0 = 1,
UID_SV1_Extract_out0 = 2,
UID_SV2_Process_out0 = 3,
UID_Process_2 = 4,
UID_Process_2_Data0 = 5,
UID_Split_3 = 6,
UID_SV3_Split_out0 = 7,
UID_SV3_Split_out1 = 8,
UID_Output_4 = 9,
UID_Output_5 = 10,
UID_Split_3_0,
UID_Split_3_1,
UID_ParallelUnionAll_Extract_0
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class SV1_Extract_out0
    {
    public:
        FString m_year;
        FString m_category;
        FString m_winner;
        FString m_entity;
        SV1_Extract_out0();
        SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_out0(const SV1_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"year:string,category:string,winner:string,entity:string" };
        }

        friend ostream & operator<<(ostream & os, SV1_Extract_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV1_Extract_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_2_Data0
    {
    public:
        FString m_year;
        FString m_category;
        FString m_winner;
        FString m_entity;
        FString m_sentence;
        Process_2_Data0();
        Process_2_Data0(const Process_2_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_2_Data0(const Process_2_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"year:string,category:string,winner:string,entity:string,sentence:string" };
        }

        friend ostream & operator<<(ostream & os, Process_2_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_2_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<SV1_Extract_out0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(4);            
            offset[0] = ColumnOffsetId(offsetof(SV1_Extract_out0, m_year), T_String);
            offset[1] = ColumnOffsetId(offsetof(SV1_Extract_out0, m_category), T_String);
            offset[2] = ColumnOffsetId(offsetof(SV1_Extract_out0, m_winner), T_String);
            offset[3] = ColumnOffsetId(offsetof(SV1_Extract_out0, m_entity), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(4);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("year"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("year")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("category"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("category")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("winner"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("winner")) >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("entity"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("entity")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<SV1_Extract_out0>::ComplexColumnGetter, &ManagedRow<SV1_Extract_out0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<SV1_Extract_out0>;    
    template<>
    struct ManagedRow<Process_2_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(5);            
            offset[0] = ColumnOffsetId(offsetof(Process_2_Data0, m_year), T_String);
            offset[1] = ColumnOffsetId(offsetof(Process_2_Data0, m_category), T_String);
            offset[2] = ColumnOffsetId(offsetof(Process_2_Data0, m_winner), T_String);
            offset[3] = ColumnOffsetId(offsetof(Process_2_Data0, m_entity), T_String);
            offset[4] = ColumnOffsetId(offsetof(Process_2_Data0, m_sentence), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(5);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("year"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("year")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("category"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("category")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("winner"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("winner")) >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("entity"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("entity")) >= 0, /*isSystem*/false);
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("sentence"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("sentence")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_2_Data0>::ComplexColumnGetter, &ManagedRow<Process_2_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Process_2_Data0>;    

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_year);
                    input->Read(row.m_category);
                    input->Read(row.m_winner);
                    input->Read(row.m_entity);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_year);
                    }
                    else
                    {
                        row.m_year.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_category);
                    }
                    else
                    {
                        row.m_category.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_winner);
                    }
                    else
                    {
                        row.m_winner.SetNull();
                    }
                    if ((___masking___[0] & 16 ) != 16)
                    {
                        input->Read(row.m_entity);
                    }
                    else
                    {
                        row.m_entity.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_year.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_category.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_winner.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (row.m_entity.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 16;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_year.IsNull())
            {
                output->Write(row.m_year);
            }
            if (!row.m_category.IsNull())
            {
                output->Write(row.m_category);
            }
            if (!row.m_winner.IsNull())
            {
                output->Write(row.m_winner);
            }
            if (!row.m_entity.IsNull())
            {
                output->Write(row.m_entity);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_out0::SV1_Extract_out0()
    {
    }
    INLINE SV1_Extract_out0::SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
            m_year(c.m_year, alloc),
            m_category(c.m_category, alloc),
            m_winner(c.m_winner, alloc),
            m_entity(c.m_entity, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_2_Data0::Process_2_Data0()
    {
    }

#pragma endregion Schema Constructors
#pragma hdrstop
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}

extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;

extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}

#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<SV1_Extract_out0, UID_Extract_0>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 0, CharFormat_uint16, false, false>, CosmosInput> * input, SV1_Extract_out0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_year);
                    input->Read(row.m_category);
                    input->Read(row.m_winner);
                    input->Read(row.m_entity);

                    if (!input->EndRow())
                    {
                        // Too many columns in row - skip row and read next row.
                        input->SkipLine();
                        continue;
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows are ignored
                    case ScopeStreamException::UnexpectedNewLine:
                        // Too few columns in row - continue with next row
                        break;

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 5> c_columnNames =
            {
                "year",
                "category",
                "winner",
                "entity",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<SV1_Extract_out0, TextExtractPolicy<SV1_Extract_out0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 0, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, true, 0, CharFormat_uint16), UID_Extract_0));
        }

    ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract, SV1_Extract_out0, IsNativeOnlyVertex> UnionAllType_Extract_0_SV1_Extract_out0_connector;
        unique_ptr<UnionAllType_Extract_0_SV1_Extract_out0_connector> unionall_Extract_0_SV1_Extract_out0_connector_ptr(new UnionAllType_Extract_0_SV1_Extract_out0_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_SV1_Extract_out0_connector * unionall_Extract_0_SV1_Extract_out0_connector = unionall_Extract_0_SV1_Extract_out0_connector_ptr.get();
        ULONG unionall_Extract_0_SV1_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Extract_0_SV1_Extract_out0_connector, SV1_Extract_out0, BinaryOutputPolicy<SV1_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(unionall_Extract_0_SV1_Extract_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV1_Extract_out0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract
#pragma region SV2_Process
#if defined(COMPILE_SV2_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<SV1_Extract_out0, UID_SV2_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, SV1_Extract_out0 & row)
        {
            if (!row.m_year.IsNull())
            {
                output->Write<FString,true>(row.m_year);
            }
            output->WriteDelimiter();
            if (!row.m_category.IsNull())
            {
                output->Write<FString,true>(row.m_category);
            }
            output->WriteDelimiter();
            if (!row.m_winner.IsNull())
            {
                output->Write<FString,true>(row.m_winner);
            }
            output->WriteDelimiter();
            if (!row.m_entity.IsNull())
            {
                output->Write<FString,true>(row.m_entity);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType1_SV2_Process;        
        unique_ptr<ExtractorType1_SV2_Process> extractor_0_ptr= make_unique<ExtractorType1_SV2_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV2_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define outputer type
        typedef Outputer<ExtractorType1_SV2_Process, SV1_Extract_out0, TextOutputPolicy<SV1_Extract_out0, UID_SV2_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV2_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Process> outputer_SV2_Process_out0_ptr(new OutputerType2_SV2_Process(extractor_0, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV2_Process_out0));
        OutputerType2_SV2_Process * outputer_SV2_Process_out0 = outputer_SV2_Process_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV2_Process_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV1_Extract_out0 row;
            outputer_SV2_Process_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV2_Process_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV2_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV2_Process
#pragma region SV3_Split
#if defined(COMPILE_SV3_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<SV1_Extract_out0, Process_2_Data0, UID_Process_2>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_out0 & input, Process_2_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_2>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_2());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_2, "Constructor", ex);
                throw;
            }
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Process_2_Data0, UID_Process_2>
    {
    public:
        static void Marshal(ScopeEngineManaged::SqlIpRow^ managedRow, Process_2_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_year, managedRow->GetInternal<System::String^>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_category, managedRow->GetInternal<System::String^>(1), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_winner, managedRow->GetInternal<System::String^>(2), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_entity, managedRow->GetInternal<System::String^>(3), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_sentence, managedRow->GetInternal<System::String^>(4), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_2_Data0, UID_Output_4>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_2_Data0 & row)
        {
            if (!row.m_year.IsNull())
            {
                output->Write<FString,true>(row.m_year);
            }
            output->WriteDelimiter();
            if (!row.m_category.IsNull())
            {
                output->Write<FString,true>(row.m_category);
            }
            output->WriteDelimiter();
            if (!row.m_winner.IsNull())
            {
                output->Write<FString,true>(row.m_winner);
            }
            output->WriteDelimiter();
            if (!row.m_entity.IsNull())
            {
                output->Write<FString,true>(row.m_entity);
            }
            output->WriteDelimiter();
            if (!row.m_sentence.IsNull())
            {
                output->Write<FString,true>(row.m_sentence);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

    template<> 
    class TextOutputPolicy<Process_2_Data0, UID_Output_5>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_2_Data0 & row)
        {
            if (!row.m_year.IsNull())
            {
                output->Write<FString,true>(row.m_year);
            }
            output->WriteDelimiter();
            if (!row.m_category.IsNull())
            {
                output->Write<FString,true>(row.m_category);
            }
            output->WriteDelimiter();
            if (!row.m_winner.IsNull())
            {
                output->Write<FString,true>(row.m_winner);
            }
            output->WriteDelimiter();
            if (!row.m_entity.IsNull())
            {
                output->Write<FString,true>(row.m_entity);
            }
            output->WriteDelimiter();
            if (!row.m_sentence.IsNull())
            {
                output->Write<FString,true>(row.m_sentence);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_3_0 [] =
    {
        "year",
        "category",
        "winner",
        "entity",
        "sentence",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_2_Data0, Process_2_Data0, UID_Split_3_0>
    {
    public:

        void Init(ManagedRow<Process_2_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_2_Data0 & input, Process_2_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_year = input.m_year;
                    exceptionIndex++;
                    output.m_category = input.m_category;
                    exceptionIndex++;
                    output.m_winner = input.m_winner;
                    exceptionIndex++;
                    output.m_entity = input.m_entity;
                    exceptionIndex++;
                    output.m_sentence = input.m_sentence;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_3_0[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_3_1 [] =
    {
        "sentence != \"\"",
        "year",
        "category",
        "winner",
        "entity",
        "sentence",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_2_Data0, Process_2_Data0, UID_Split_3_1>
    {
    public:

        void Init(ManagedRow<Process_2_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_2_Data0 & input, Process_2_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_sentence != staticconstant_0)
                {

                    exceptionIndex++;
                    output.m_year = input.m_year;
                    exceptionIndex++;
                    output.m_category = input.m_category;
                    exceptionIndex++;
                    output.m_winner = input.m_winner;
                    exceptionIndex++;
                    output.m_entity = input.m_entity;
                    exceptionIndex++;
                    output.m_sentence = input.m_sentence;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Split_3_1[exceptionIndex]));
                }
}
        static FString staticconstant_0;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("", 0);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<Process_2_Data0, Process_2_Data0, UID_Split_3_1>::staticconstant_0;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename Process_2_Data0, UID_Split_3>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<Process_2_Data0> SplitOutputType_Split_3_2;
        SplitOutputType_Split_3_2 splitOutputter_Split_3_2;

        typedef SplitOutputter<SplitOutputType_Split_3_2, Process_2_Data0, TextOutputPolicy<Process_2_Data0, UID_Output_5>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, UID_Split_3_1> SplitOutputType_Split_3_1;
        SplitOutputType_Split_3_1 splitOutputter_Split_3_1;


        typedef SplitOutputter<SplitOutputType_Split_3_1, Process_2_Data0, TextOutputPolicy<Process_2_Data0, UID_Output_4>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, UID_Split_3_0> SplitOutputType_Split_3_0;
        SplitOutputType_Split_3_0 splitOutputter_Split_3_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_3_1(&splitOutputter_Split_3_2, outputFiles[1].outputFileName, false, outputBufSize, outputBufCnt, UID_SV3_Split_out1, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16)),
            splitOutputter_Split_3_0(&splitOutputter_Split_3_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV3_Split_out0, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16))
        {
        }

        void SetSequenceNumber(int sequenceNumber)
        {
            splitOutputter_Split_3_1.SetSequenceNumber(sequenceNumber);
            splitOutputter_Split_3_0.SetSequenceNumber(sequenceNumber);
        }

        void Init()
        {
            splitOutputter_Split_3_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_3_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_3_0.ProcessMetadata(metadata);
        }

        void OutputHeader()
        {
            splitOutputter_Split_3_0.OutputHeader();
        }

        void ProcessRow(Process_2_Data0 & input)
        {
            splitOutputter_Split_3_0.ProcessRow(input);
        }

        __declspec(noinline)
		void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_3_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_3_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_3_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, Configuration::GetGlobal().GetMaxOnDiskRowSize(), m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, Configuration::GetGlobal().GetMaxOnDiskRowSize(), m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_3_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_3_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_3_0.LoadScopeCEPCheckpoint(input);
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType1_SV3_Split;        
        unique_ptr<ExtractorType1_SV3_Split> extractor_0_ptr= make_unique<ExtractorType1_SV3_Split>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV3_Split * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<SV1_Extract_out0>> delegate_extractor_0_ptr (new OperatorDelegate<SV1_Extract_out0>(OperatorDelegate<SV1_Extract_out0>::FromOperator(extractor_0)));
        OperatorDelegate<SV1_Extract_out0> * delegate_extractor_0 = delegate_extractor_0_ptr.get();
        ULONG delegate_extractor_0_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<SV1_Extract_out0, Process_2_Data0> ProcessorType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_2> processor_Process_2_ptr (new ProcessorType_Process_2(ScopeProcessorManagedFactory::MakeSqlIp<SV1_Extract_out0,Process_2_Data0,UID_Process_2>(delegate_extractor_0), delegate_extractor_0, UID_Process_2));
        ProcessorType_Process_2 * processor_Process_2 = processor_Process_2_ptr.get();
        ULONG processor_Process_2_count = 1;
        // Define splitter type

        typedef Splitter<ProcessorType_Process_2, Process_2_Data0, false, UID_Split_3> SplitterType_Split_3;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_3> splitter_Split_3_ptr (new SplitterType_Split_3(processor_Process_2, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_3));
        SplitterType_Split_3 * splitter_Split_3 = splitter_Split_3_ptr.get();

        if (argv != nullptr && argc > 0)
        {
            try
            {
                int sequenceNumber = GetSequenceNumber(argv, argc);
                splitter_Split_3->SetSequenceNumber(sequenceNumber);
            }
            catch(const RuntimeException&)
            {
                // Sequence number will remain 0 in splitter_Split_3.
            }
        }

        try
        {
            // Init operator chain
            splitter_Split_3->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_2_Data0 row;
            splitter_Split_3->GetNextRow(row);

            // Close operator chain
            splitter_Split_3->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        splitter_Split_3->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<SV1_Extract_out0, Process_2_Data0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<SV1_Extract_out0, Process_2_Data0, UID_Process_2>(OperatorDelegate<SV1_Extract_out0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV3_Split
// Empty footer
