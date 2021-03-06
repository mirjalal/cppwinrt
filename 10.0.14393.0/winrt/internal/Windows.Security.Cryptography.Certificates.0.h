// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Cryptography::Certificates {

struct ICertificate;
struct ICertificate2;
struct ICertificate3;
struct ICertificateChain;
struct ICertificateEnrollmentManagerStatics;
struct ICertificateEnrollmentManagerStatics2;
struct ICertificateEnrollmentManagerStatics3;
struct ICertificateFactory;
struct ICertificateKeyUsages;
struct ICertificateQuery;
struct ICertificateQuery2;
struct ICertificateRequestProperties;
struct ICertificateRequestProperties2;
struct ICertificateRequestProperties3;
struct ICertificateStore;
struct ICertificateStore2;
struct ICertificateStoresStatics;
struct ICertificateStoresStatics2;
struct IChainBuildingParameters;
struct IChainValidationParameters;
struct ICmsAttachedSignature;
struct ICmsAttachedSignatureFactory;
struct ICmsAttachedSignatureStatics;
struct ICmsDetachedSignature;
struct ICmsDetachedSignatureFactory;
struct ICmsDetachedSignatureStatics;
struct ICmsSignerInfo;
struct ICmsTimestampInfo;
struct IKeyAlgorithmNamesStatics;
struct IKeyAlgorithmNamesStatics2;
struct IKeyAttestationHelperStatics;
struct IKeyAttestationHelperStatics2;
struct IKeyStorageProviderNamesStatics;
struct IKeyStorageProviderNamesStatics2;
struct IPfxImportParameters;
struct IStandardCertificateStoreNamesStatics;
struct ISubjectAlternativeNameInfo;
struct IUserCertificateEnrollmentManager;
struct IUserCertificateEnrollmentManager2;
struct IUserCertificateStore;
struct Certificate;
struct CertificateChain;
struct CertificateKeyUsages;
struct CertificateQuery;
struct CertificateRequestProperties;
struct CertificateStore;
struct ChainBuildingParameters;
struct ChainValidationParameters;
struct CmsAttachedSignature;
struct CmsDetachedSignature;
struct CmsSignerInfo;
struct CmsTimestampInfo;
struct PfxImportParameters;
struct SubjectAlternativeNameInfo;
struct UserCertificateEnrollmentManager;
struct UserCertificateStore;

}

namespace Windows::Security::Cryptography::Certificates {

struct ICertificate;
struct ICertificate2;
struct ICertificate3;
struct ICertificateChain;
struct ICertificateEnrollmentManagerStatics;
struct ICertificateEnrollmentManagerStatics2;
struct ICertificateEnrollmentManagerStatics3;
struct ICertificateFactory;
struct ICertificateKeyUsages;
struct ICertificateQuery;
struct ICertificateQuery2;
struct ICertificateRequestProperties;
struct ICertificateRequestProperties2;
struct ICertificateRequestProperties3;
struct ICertificateStore;
struct ICertificateStore2;
struct ICertificateStoresStatics;
struct ICertificateStoresStatics2;
struct IChainBuildingParameters;
struct IChainValidationParameters;
struct ICmsAttachedSignature;
struct ICmsAttachedSignatureFactory;
struct ICmsAttachedSignatureStatics;
struct ICmsDetachedSignature;
struct ICmsDetachedSignatureFactory;
struct ICmsDetachedSignatureStatics;
struct ICmsSignerInfo;
struct ICmsTimestampInfo;
struct IKeyAlgorithmNamesStatics;
struct IKeyAlgorithmNamesStatics2;
struct IKeyAttestationHelperStatics;
struct IKeyAttestationHelperStatics2;
struct IKeyStorageProviderNamesStatics;
struct IKeyStorageProviderNamesStatics2;
struct IPfxImportParameters;
struct IStandardCertificateStoreNamesStatics;
struct ISubjectAlternativeNameInfo;
struct IUserCertificateEnrollmentManager;
struct IUserCertificateEnrollmentManager2;
struct IUserCertificateStore;
struct Certificate;
struct CertificateChain;
struct CertificateEnrollmentManager;
struct CertificateKeyUsages;
struct CertificateQuery;
struct CertificateRequestProperties;
struct CertificateStore;
struct CertificateStores;
struct ChainBuildingParameters;
struct ChainValidationParameters;
struct CmsAttachedSignature;
struct CmsDetachedSignature;
struct CmsSignerInfo;
struct CmsTimestampInfo;
struct KeyAlgorithmNames;
struct KeyAttestationHelper;
struct KeyStorageProviderNames;
struct PfxImportParameters;
struct StandardCertificateStoreNames;
struct SubjectAlternativeNameInfo;
struct UserCertificateEnrollmentManager;
struct UserCertificateStore;

}

namespace Windows::Security::Cryptography::Certificates {

enum class CertificateChainPolicy
{
    Base = 0,
    Ssl = 1,
    NTAuthentication = 2,
    MicrosoftRoot = 3,
};

enum class ChainValidationResult
{
    Success = 0,
    Untrusted = 1,
    Revoked = 2,
    Expired = 3,
    IncompleteChain = 4,
    InvalidSignature = 5,
    WrongUsage = 6,
    InvalidName = 7,
    InvalidCertificateAuthorityPolicy = 8,
    BasicConstraintsError = 9,
    UnknownCriticalExtension = 10,
    RevocationInformationMissing = 11,
    RevocationFailure = 12,
    OtherErrors = 13,
};

enum class EnrollKeyUsages : unsigned
{
    None = 0x0,
    Decryption = 0x1,
    Signing = 0x2,
    KeyAgreement = 0x4,
    All = 0xFFFFFF,
};

DEFINE_ENUM_FLAG_OPERATORS(EnrollKeyUsages)

enum class ExportOption
{
    NotExportable = 0,
    Exportable = 1,
};

enum class InstallOptions : unsigned
{
    None = 0x0,
    DeleteExpired = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(InstallOptions)

enum class KeyProtectionLevel
{
    NoConsent = 0,
    ConsentOnly = 1,
    ConsentWithPassword = 2,
    ConsentWithFingerprint = 3,
};

enum class KeySize
{
    Invalid = 0,
    Rsa2048 = 2048,
    Rsa4096 = 4096,
};

enum class SignatureValidationResult
{
    Success = 0,
    InvalidParameter = 1,
    BadMessage = 2,
    InvalidSignature = 3,
    OtherErrors = 4,
};

}

}
