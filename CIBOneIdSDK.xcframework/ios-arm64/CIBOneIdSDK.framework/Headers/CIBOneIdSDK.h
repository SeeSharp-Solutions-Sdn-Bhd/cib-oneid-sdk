#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CIBOISDKAppleCredentials, CIBOISDKAppleCredentialsCompanion, CIBOISDKAppleLoginRequest, CIBOISDKAppleLoginRequestCompanion, CIBOISDKAuthTokens, CIBOISDKAuthTokensCompanion, CIBOISDKCIBError, CIBOISDKCIBErrorCompanion, CIBOISDKCIBHttpClient, CIBOISDKCIBOneIdConfig, CIBOISDKCIBResult<__covariant T>, CIBOISDKCIBResultFailure, CIBOISDKCIBResultSuccess<__covariant T>, CIBOISDKCibMallLoginRequest, CIBOISDKCibMallLoginRequestCompanion, CIBOISDKFacebookLoginRequest, CIBOISDKFacebookLoginRequestCompanion, CIBOISDKGoogleCredentials, CIBOISDKGoogleCredentialsCompanion, CIBOISDKGoogleLoginRequest, CIBOISDKGoogleLoginRequestCompanion, CIBOISDKJwtUtils, CIBOISDKKotlinAbstractCoroutineContextElement, CIBOISDKKotlinAbstractCoroutineContextKey<B, E>, CIBOISDKKotlinArray<T>, CIBOISDKKotlinByteArray, CIBOISDKKotlinByteIterator, CIBOISDKKotlinCancellationException, CIBOISDKKotlinEnum<E>, CIBOISDKKotlinEnumCompanion, CIBOISDKKotlinException, CIBOISDKKotlinIllegalStateException, CIBOISDKKotlinKTypeProjection, CIBOISDKKotlinKTypeProjectionCompanion, CIBOISDKKotlinKVariance, CIBOISDKKotlinNothing, CIBOISDKKotlinRuntimeException, CIBOISDKKotlinThrowable, CIBOISDKKotlinUnit, CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher, CIBOISDKKotlinx_coroutines_coreCoroutineDispatcherKey, CIBOISDKKotlinx_io_coreBuffer, CIBOISDKKotlinx_serialization_coreSerialKind, CIBOISDKKotlinx_serialization_coreSerializersModule, CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode, CIBOISDKKotlinx_serialization_jsonJson, CIBOISDKKotlinx_serialization_jsonJsonConfiguration, CIBOISDKKotlinx_serialization_jsonJsonDefault, CIBOISDKKotlinx_serialization_jsonJsonElement, CIBOISDKKotlinx_serialization_jsonJsonElementCompanion, CIBOISDKKtor_client_coreHttpClient, CIBOISDKKtor_client_coreHttpClientCall, CIBOISDKKtor_client_coreHttpClientCallCompanion, CIBOISDKKtor_client_coreHttpClientConfig<T>, CIBOISDKKtor_client_coreHttpClientEngineConfig, CIBOISDKKtor_client_coreHttpReceivePipeline, CIBOISDKKtor_client_coreHttpReceivePipelinePhases, CIBOISDKKtor_client_coreHttpRequestBuilder, CIBOISDKKtor_client_coreHttpRequestBuilderCompanion, CIBOISDKKtor_client_coreHttpRequestData, CIBOISDKKtor_client_coreHttpRequestPipeline, CIBOISDKKtor_client_coreHttpRequestPipelinePhases, CIBOISDKKtor_client_coreHttpResponse, CIBOISDKKtor_client_coreHttpResponseContainer, CIBOISDKKtor_client_coreHttpResponseData, CIBOISDKKtor_client_coreHttpResponsePipeline, CIBOISDKKtor_client_coreHttpResponsePipelinePhases, CIBOISDKKtor_client_coreHttpSendPipeline, CIBOISDKKtor_client_coreHttpSendPipelinePhases, CIBOISDKKtor_client_coreProxyConfig, CIBOISDKKtor_eventsEventDefinition<T>, CIBOISDKKtor_eventsEvents, CIBOISDKKtor_httpContentType, CIBOISDKKtor_httpContentTypeCompanion, CIBOISDKKtor_httpHeaderValueParam, CIBOISDKKtor_httpHeaderValueWithParameters, CIBOISDKKtor_httpHeaderValueWithParametersCompanion, CIBOISDKKtor_httpHeadersBuilder, CIBOISDKKtor_httpHttpMethod, CIBOISDKKtor_httpHttpMethodCompanion, CIBOISDKKtor_httpHttpProtocolVersion, CIBOISDKKtor_httpHttpProtocolVersionCompanion, CIBOISDKKtor_httpHttpStatusCode, CIBOISDKKtor_httpHttpStatusCodeCompanion, CIBOISDKKtor_httpOutgoingContent, CIBOISDKKtor_httpURLBuilder, CIBOISDKKtor_httpURLBuilderCompanion, CIBOISDKKtor_httpURLProtocol, CIBOISDKKtor_httpURLProtocolCompanion, CIBOISDKKtor_httpUrl, CIBOISDKKtor_httpUrlCompanion, CIBOISDKKtor_utilsAttributeKey<T>, CIBOISDKKtor_utilsGMTDate, CIBOISDKKtor_utilsGMTDateCompanion, CIBOISDKKtor_utilsMonth, CIBOISDKKtor_utilsMonthCompanion, CIBOISDKKtor_utilsPipeline<TSubject, TContext>, CIBOISDKKtor_utilsPipelinePhase, CIBOISDKKtor_utilsStringValuesBuilderImpl, CIBOISDKKtor_utilsTypeInfo, CIBOISDKKtor_utilsWeekDay, CIBOISDKKtor_utilsWeekDayCompanion, CIBOISDKLocalLoginRequest, CIBOISDKLocalLoginRequestCompanion, CIBOISDKNativeSocialAuthBridge, CIBOISDKPlatformTokenStoreCompanion, CIBOISDKRegisterTenantUserRequest, CIBOISDKRegisterTenantUserRequestCompanion, CIBOISDKRequestPhoneLoginOtpDto, CIBOISDKRequestPhoneLoginOtpDtoCompanion, CIBOISDKRequestPhoneOtpDto, CIBOISDKRequestPhoneOtpDtoCompanion, CIBOISDKSocialAuthLauncher, CIBOISDKTenantUserDto, CIBOISDKTenantUserDtoCompanion, CIBOISDKTokenCoordinator, CIBOISDKUnifiedAuthRequest, CIBOISDKUnifiedAuthRequestCompanion, CIBOISDKUpdateTenantUserProfileRequest, CIBOISDKUpdateTenantUserProfileRequestCompanion, CIBOISDKVerifyPhoneLoginOtpDto, CIBOISDKVerifyPhoneLoginOtpDtoCompanion, CIBOISDKVerifyPhoneOtpDto, CIBOISDKVerifyPhoneOtpDtoCompanion, UIViewController;

@protocol CIBOISDKKotlinAnnotation, CIBOISDKKotlinAutoCloseable, CIBOISDKKotlinComparable, CIBOISDKKotlinContinuation, CIBOISDKKotlinContinuationInterceptor, CIBOISDKKotlinCoroutineContext, CIBOISDKKotlinCoroutineContextElement, CIBOISDKKotlinCoroutineContextKey, CIBOISDKKotlinFunction, CIBOISDKKotlinIterator, CIBOISDKKotlinKAnnotatedElement, CIBOISDKKotlinKClass, CIBOISDKKotlinKClassifier, CIBOISDKKotlinKDeclarationContainer, CIBOISDKKotlinKType, CIBOISDKKotlinMapEntry, CIBOISDKKotlinSequence, CIBOISDKKotlinSuspendFunction2, CIBOISDKKotlinx_coroutines_coreChildHandle, CIBOISDKKotlinx_coroutines_coreChildJob, CIBOISDKKotlinx_coroutines_coreCoroutineScope, CIBOISDKKotlinx_coroutines_coreDisposableHandle, CIBOISDKKotlinx_coroutines_coreJob, CIBOISDKKotlinx_coroutines_coreParentJob, CIBOISDKKotlinx_coroutines_coreRunnable, CIBOISDKKotlinx_coroutines_coreSelectClause, CIBOISDKKotlinx_coroutines_coreSelectClause0, CIBOISDKKotlinx_coroutines_coreSelectInstance, CIBOISDKKotlinx_io_coreRawSink, CIBOISDKKotlinx_io_coreRawSource, CIBOISDKKotlinx_io_coreSink, CIBOISDKKotlinx_io_coreSource, CIBOISDKKotlinx_serialization_coreCompositeDecoder, CIBOISDKKotlinx_serialization_coreCompositeEncoder, CIBOISDKKotlinx_serialization_coreDecoder, CIBOISDKKotlinx_serialization_coreDeserializationStrategy, CIBOISDKKotlinx_serialization_coreEncoder, CIBOISDKKotlinx_serialization_coreKSerializer, CIBOISDKKotlinx_serialization_coreSerialDescriptor, CIBOISDKKotlinx_serialization_coreSerialFormat, CIBOISDKKotlinx_serialization_coreSerializationStrategy, CIBOISDKKotlinx_serialization_coreSerializersModuleCollector, CIBOISDKKotlinx_serialization_coreStringFormat, CIBOISDKKotlinx_serialization_jsonJsonNamingStrategy, CIBOISDKKtor_client_coreHttpClientEngine, CIBOISDKKtor_client_coreHttpClientEngineCapability, CIBOISDKKtor_client_coreHttpClientPlugin, CIBOISDKKtor_client_coreHttpRequest, CIBOISDKKtor_httpHeaders, CIBOISDKKtor_httpHttpMessage, CIBOISDKKtor_httpHttpMessageBuilder, CIBOISDKKtor_httpParameters, CIBOISDKKtor_httpParametersBuilder, CIBOISDKKtor_ioByteReadChannel, CIBOISDKKtor_ioCloseable, CIBOISDKKtor_utilsAttributes, CIBOISDKKtor_utilsStringValues, CIBOISDKKtor_utilsStringValuesBuilder, CIBOISDKTokenStore;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CIBOISDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CIBOISDKBase (CIBOISDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CIBOISDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CIBOISDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCIBOISDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CIBOISDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface CIBOISDKByte : CIBOISDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CIBOISDKUByte : CIBOISDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CIBOISDKShort : CIBOISDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CIBOISDKUShort : CIBOISDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CIBOISDKInt : CIBOISDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CIBOISDKUInt : CIBOISDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CIBOISDKLong : CIBOISDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CIBOISDKULong : CIBOISDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CIBOISDKFloat : CIBOISDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CIBOISDKDouble : CIBOISDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CIBOISDKBoolean : CIBOISDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBOneIdClient")))
@interface CIBOISDKCIBOneIdClient : CIBOISDKBase
- (instancetype)initWithConfig:(CIBOISDKCIBOneIdConfig *)config tokenStore:(id<CIBOISDKTokenStore>)tokenStore customHttpClient:(CIBOISDKKtor_client_coreHttpClient * _Nullable)customHttpClient __attribute__((swift_name("init(config:tokenStore:customHttpClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfileWithCompletionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKTenantUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfile(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getValidAccessTokenWithCompletionHandler:(void (^)(CIBOISDKCIBResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getValidAccessToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginRequest:(CIBOISDKLocalLoginRequest *)request completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginIdentifier:(NSString *)identifier password:(NSString *)password completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(identifier:password:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginUnifiedRequest:(CIBOISDKUnifiedAuthRequest *)request completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginUnified(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithAppleLauncher:(CIBOISDKSocialAuthLauncher *)launcher completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithApple(launcher:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithAppleTokenIdToken:(NSString * _Nullable)idToken authorizationCode:(NSString * _Nullable)authorizationCode userJson:(NSString * _Nullable)userJson completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithAppleToken(idToken:authorizationCode:userJson:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithCibMallCibAccount:(NSString *)cibAccount password:(NSString *)password completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithCibMall(cibAccount:password:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithFacebookLauncher:(CIBOISDKSocialAuthLauncher *)launcher permissions:(NSArray<NSString *> *)permissions completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithFacebook(launcher:permissions:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithFacebookTokenAccessToken:(NSString *)accessToken completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithFacebookToken(accessToken:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithGoogleLauncher:(CIBOISDKSocialAuthLauncher *)launcher serverClientId:(NSString *)serverClientId completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithGoogle(launcher:serverClientId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithGoogleTokenIdToken:(NSString * _Nullable)idToken authCode:(NSString * _Nullable)authCode completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithGoogleToken(idToken:authCode:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerRequest:(CIBOISDKRegisterTenantUserRequest *)request completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKTenantUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestPhoneLoginOtpPhoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestPhoneLoginOtp(phoneNumber:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestPhoneRegistrationOtpPhoneNumber:(NSString *)phoneNumber email:(NSString * _Nullable)email completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestPhoneRegistrationOtp(phoneNumber:email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateProfileRequest:(CIBOISDKUpdateTenantUserProfileRequest *)request completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKTenantUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateProfile(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyPhoneLoginOtpPhoneNumber:(NSString *)phoneNumber otp:(NSString *)otp completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyPhoneLoginOtp(phoneNumber:otp:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyPhoneRegistrationOtpRequest:(CIBOISDKVerifyPhoneOtpDto *)request completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAuthTokens *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyPhoneRegistrationOtp(request:completionHandler:)")));
@property (readonly) CIBOISDKCIBOneIdConfig *config __attribute__((swift_name("config")));
@property (readonly) CIBOISDKCIBHttpClient *httpClient __attribute__((swift_name("httpClient")));
@property (readonly) id<CIBOISDKTokenStore> tokenStore __attribute__((swift_name("tokenStore")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleCredentials")))
@interface CIBOISDKAppleCredentials : CIBOISDKBase
- (instancetype)initWithIdToken:(NSString * _Nullable)idToken authorizationCode:(NSString * _Nullable)authorizationCode userJson:(NSString * _Nullable)userJson __attribute__((swift_name("init(idToken:authorizationCode:userJson:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKAppleCredentialsCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKAppleCredentials *)doCopyIdToken:(NSString * _Nullable)idToken authorizationCode:(NSString * _Nullable)authorizationCode userJson:(NSString * _Nullable)userJson __attribute__((swift_name("doCopy(idToken:authorizationCode:userJson:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authorizationCode")
*/
@property (readonly) NSString * _Nullable authorizationCode __attribute__((swift_name("authorizationCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idToken")
*/
@property (readonly) NSString * _Nullable idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userJson")
*/
@property (readonly) NSString * _Nullable userJson __attribute__((swift_name("userJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleCredentials.Companion")))
@interface CIBOISDKAppleCredentialsCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKAppleCredentialsCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleLoginRequest")))
@interface CIBOISDKAppleLoginRequest : CIBOISDKBase
- (instancetype)initWithIdToken:(NSString * _Nullable)idToken authorizationCode:(NSString * _Nullable)authorizationCode userJson:(NSString * _Nullable)userJson appId:(NSString * _Nullable)appId __attribute__((swift_name("init(idToken:authorizationCode:userJson:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKAppleLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKAppleLoginRequest *)doCopyIdToken:(NSString * _Nullable)idToken authorizationCode:(NSString * _Nullable)authorizationCode userJson:(NSString * _Nullable)userJson appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(idToken:authorizationCode:userJson:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authorizationCode")
*/
@property (readonly) NSString * _Nullable authorizationCode __attribute__((swift_name("authorizationCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idToken")
*/
@property (readonly) NSString * _Nullable idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userJson")
*/
@property (readonly) NSString * _Nullable userJson __attribute__((swift_name("userJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleLoginRequest.Companion")))
@interface CIBOISDKAppleLoginRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKAppleLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTokens")))
@interface CIBOISDKAuthTokens : CIBOISDKBase
- (instancetype)initWithTokenType:(NSString *)tokenType accessToken:(NSString *)accessToken expiresIn:(int64_t)expiresIn refreshToken:(NSString * _Nullable)refreshToken __attribute__((swift_name("init(tokenType:accessToken:expiresIn:refreshToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKAuthTokensCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKAuthTokens *)doCopyTokenType:(NSString *)tokenType accessToken:(NSString *)accessToken expiresIn:(int64_t)expiresIn refreshToken:(NSString * _Nullable)refreshToken __attribute__((swift_name("doCopy(tokenType:accessToken:expiresIn:refreshToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accessToken")
*/
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiresIn")
*/
@property (readonly) int64_t expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refreshToken")
*/
@property (readonly) NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tokenType")
*/
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTokens.Companion")))
@interface CIBOISDKAuthTokensCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKAuthTokensCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBError")))
@interface CIBOISDKCIBError : CIBOISDKBase
- (instancetype)initWithCode:(NSString *)code message:(NSString *)message details:(NSDictionary<NSString *, NSString *> * _Nullable)details httpStatusCode:(CIBOISDKInt * _Nullable)httpStatusCode __attribute__((swift_name("init(code:message:details:httpStatusCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKCIBErrorCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKCIBError *)doCopyCode:(NSString *)code message:(NSString *)message details:(NSDictionary<NSString *, NSString *> * _Nullable)details httpStatusCode:(CIBOISDKInt * _Nullable)httpStatusCode __attribute__((swift_name("doCopy(code:message:details:httpStatusCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable details __attribute__((swift_name("details")));
@property (readonly) CIBOISDKInt * _Nullable httpStatusCode __attribute__((swift_name("httpStatusCode")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBError.Companion")))
@interface CIBOISDKCIBErrorCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKCIBErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CIBResult")))
@interface CIBOISDKCIBResult<__covariant T> : CIBOISDKBase
- (T _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (T _Nullable)getOrThrow __attribute__((swift_name("getOrThrow()")));
- (CIBOISDKCIBResult<id> *)mapTransform:(id _Nullable (^)(T _Nullable))transform __attribute__((swift_name("map(transform:)")));
- (CIBOISDKCIBResult<T> *)onFailureAction:(void (^)(CIBOISDKCIBError *))action __attribute__((swift_name("onFailure(action:)")));
- (CIBOISDKCIBResult<T> *)onSuccessAction:(void (^)(T _Nullable))action __attribute__((swift_name("onSuccess(action:)")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBResultFailure")))
@interface CIBOISDKCIBResultFailure : CIBOISDKCIBResult<CIBOISDKKotlinNothing *>
- (instancetype)initWithError:(CIBOISDKCIBError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (CIBOISDKCIBResultFailure *)doCopyError:(CIBOISDKCIBError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CIBOISDKCIBError *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBResultSuccess")))
@interface CIBOISDKCIBResultSuccess<__covariant T> : CIBOISDKCIBResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (CIBOISDKCIBResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CibMallLoginRequest")))
@interface CIBOISDKCibMallLoginRequest : CIBOISDKBase
- (instancetype)initWithCibAccount:(NSString *)cibAccount password:(NSString *)password appId:(NSString * _Nullable)appId __attribute__((swift_name("init(cibAccount:password:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKCibMallLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKCibMallLoginRequest *)doCopyCibAccount:(NSString *)cibAccount password:(NSString *)password appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(cibAccount:password:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cibAccount")
*/
@property (readonly) NSString *cibAccount __attribute__((swift_name("cibAccount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CibMallLoginRequest.Companion")))
@interface CIBOISDKCibMallLoginRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKCibMallLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FacebookLoginRequest")))
@interface CIBOISDKFacebookLoginRequest : CIBOISDKBase
- (instancetype)initWithAccessToken:(NSString *)accessToken appId:(NSString * _Nullable)appId __attribute__((swift_name("init(accessToken:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKFacebookLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKFacebookLoginRequest *)doCopyAccessToken:(NSString *)accessToken appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(accessToken:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accessToken")
*/
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FacebookLoginRequest.Companion")))
@interface CIBOISDKFacebookLoginRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKFacebookLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoogleCredentials")))
@interface CIBOISDKGoogleCredentials : CIBOISDKBase
- (instancetype)initWithIdToken:(NSString * _Nullable)idToken authCode:(NSString * _Nullable)authCode __attribute__((swift_name("init(idToken:authCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKGoogleCredentialsCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKGoogleCredentials *)doCopyIdToken:(NSString * _Nullable)idToken authCode:(NSString * _Nullable)authCode __attribute__((swift_name("doCopy(idToken:authCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authCode")
*/
@property (readonly) NSString * _Nullable authCode __attribute__((swift_name("authCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idToken")
*/
@property (readonly) NSString * _Nullable idToken __attribute__((swift_name("idToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoogleCredentials.Companion")))
@interface CIBOISDKGoogleCredentialsCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKGoogleCredentialsCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoogleLoginRequest")))
@interface CIBOISDKGoogleLoginRequest : CIBOISDKBase
- (instancetype)initWithIdToken:(NSString * _Nullable)idToken authCode:(NSString * _Nullable)authCode appId:(NSString * _Nullable)appId __attribute__((swift_name("init(idToken:authCode:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKGoogleLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKGoogleLoginRequest *)doCopyIdToken:(NSString * _Nullable)idToken authCode:(NSString * _Nullable)authCode appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(idToken:authCode:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authCode")
*/
@property (readonly) NSString * _Nullable authCode __attribute__((swift_name("authCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idToken")
*/
@property (readonly) NSString * _Nullable idToken __attribute__((swift_name("idToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoogleLoginRequest.Companion")))
@interface CIBOISDKGoogleLoginRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKGoogleLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalLoginRequest")))
@interface CIBOISDKLocalLoginRequest : CIBOISDKBase
- (instancetype)initWithIdentifier:(NSString *)identifier password:(NSString *)password appId:(NSString * _Nullable)appId __attribute__((swift_name("init(identifier:password:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKLocalLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKLocalLoginRequest *)doCopyIdentifier:(NSString *)identifier password:(NSString *)password appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(identifier:password:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identifier")
*/
@property (readonly) NSString *identifier __attribute__((swift_name("identifier")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalLoginRequest.Companion")))
@interface CIBOISDKLocalLoginRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKLocalLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterTenantUserRequest")))
@interface CIBOISDKRegisterTenantUserRequest : CIBOISDKBase
- (instancetype)initWithUsername:(NSString *)username email:(NSString * _Nullable)email password:(NSString *)password phoneNumber:(NSString * _Nullable)phoneNumber extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields appId:(NSString * _Nullable)appId __attribute__((swift_name("init(username:email:password:phoneNumber:extraFields:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKRegisterTenantUserRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKRegisterTenantUserRequest *)doCopyUsername:(NSString *)username email:(NSString * _Nullable)email password:(NSString *)password phoneNumber:(NSString * _Nullable)phoneNumber extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(username:email:password:phoneNumber:extraFields:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="extraFields")
*/
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extraFields __attribute__((swift_name("extraFields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterTenantUserRequest.Companion")))
@interface CIBOISDKRegisterTenantUserRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKRegisterTenantUserRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestPhoneLoginOtpDto")))
@interface CIBOISDKRequestPhoneLoginOtpDto : CIBOISDKBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKRequestPhoneLoginOtpDtoCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKRequestPhoneLoginOtpDto *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestPhoneLoginOtpDto.Companion")))
@interface CIBOISDKRequestPhoneLoginOtpDtoCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKRequestPhoneLoginOtpDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestPhoneOtpDto")))
@interface CIBOISDKRequestPhoneOtpDto : CIBOISDKBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber email:(NSString * _Nullable)email __attribute__((swift_name("init(phoneNumber:email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKRequestPhoneOtpDtoCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKRequestPhoneOtpDto *)doCopyPhoneNumber:(NSString *)phoneNumber email:(NSString * _Nullable)email __attribute__((swift_name("doCopy(phoneNumber:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestPhoneOtpDto.Companion")))
@interface CIBOISDKRequestPhoneOtpDtoCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKRequestPhoneOtpDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TenantUserDto")))
@interface CIBOISDKTenantUserDto : CIBOISDKBase
- (instancetype)initWithId:(NSString *)id tenantId:(NSString * _Nullable)tenantId username:(NSString * _Nullable)username email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber isEmailVerified:(BOOL)isEmailVerified isPhoneVerified:(BOOL)isPhoneVerified extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("init(id:tenantId:username:email:phoneNumber:isEmailVerified:isPhoneVerified:extraFields:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKTenantUserDtoCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKTenantUserDto *)doCopyId:(NSString *)id tenantId:(NSString * _Nullable)tenantId username:(NSString * _Nullable)username email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber isEmailVerified:(BOOL)isEmailVerified isPhoneVerified:(BOOL)isPhoneVerified extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("doCopy(id:tenantId:username:email:phoneNumber:isEmailVerified:isPhoneVerified:extraFields:createdAt:updatedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="createdAt")
*/
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="extraFields")
*/
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extraFields __attribute__((swift_name("extraFields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isEmailVerified")
*/
@property (readonly) BOOL isEmailVerified __attribute__((swift_name("isEmailVerified")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isPhoneVerified")
*/
@property (readonly) BOOL isPhoneVerified __attribute__((swift_name("isPhoneVerified")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tenantId")
*/
@property (readonly) NSString * _Nullable tenantId __attribute__((swift_name("tenantId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updatedAt")
*/
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TenantUserDto.Companion")))
@interface CIBOISDKTenantUserDtoCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKTenantUserDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnifiedAuthRequest")))
@interface CIBOISDKUnifiedAuthRequest : CIBOISDKBase
- (instancetype)initWithProvider:(NSString *)provider identifier:(NSString * _Nullable)identifier password:(NSString * _Nullable)password token:(NSString * _Nullable)token idToken:(NSString * _Nullable)idToken authorizationCode:(NSString * _Nullable)authorizationCode appId:(NSString * _Nullable)appId extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields __attribute__((swift_name("init(provider:identifier:password:token:idToken:authorizationCode:appId:extraFields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKUnifiedAuthRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKUnifiedAuthRequest *)doCopyProvider:(NSString *)provider identifier:(NSString * _Nullable)identifier password:(NSString * _Nullable)password token:(NSString * _Nullable)token idToken:(NSString * _Nullable)idToken authorizationCode:(NSString * _Nullable)authorizationCode appId:(NSString * _Nullable)appId extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields __attribute__((swift_name("doCopy(provider:identifier:password:token:idToken:authorizationCode:appId:extraFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authorizationCode")
*/
@property (readonly) NSString * _Nullable authorizationCode __attribute__((swift_name("authorizationCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="extraFields")
*/
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extraFields __attribute__((swift_name("extraFields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idToken")
*/
@property (readonly) NSString * _Nullable idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identifier")
*/
@property (readonly) NSString * _Nullable identifier __attribute__((swift_name("identifier")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
*/
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="provider")
*/
@property (readonly) NSString *provider __attribute__((swift_name("provider")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnifiedAuthRequest.Companion")))
@interface CIBOISDKUnifiedAuthRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKUnifiedAuthRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTenantUserProfileRequest")))
@interface CIBOISDKUpdateTenantUserProfileRequest : CIBOISDKBase
- (instancetype)initWithUsername:(NSString * _Nullable)username email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber password:(NSString * _Nullable)password extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields __attribute__((swift_name("init(username:email:phoneNumber:password:extraFields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKUpdateTenantUserProfileRequestCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKUpdateTenantUserProfileRequest *)doCopyUsername:(NSString * _Nullable)username email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber password:(NSString * _Nullable)password extraFields:(NSDictionary<NSString *, NSString *> * _Nullable)extraFields __attribute__((swift_name("doCopy(username:email:phoneNumber:password:extraFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="extraFields")
*/
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extraFields __attribute__((swift_name("extraFields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
*/
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTenantUserProfileRequest.Companion")))
@interface CIBOISDKUpdateTenantUserProfileRequestCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKUpdateTenantUserProfileRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyPhoneLoginOtpDto")))
@interface CIBOISDKVerifyPhoneLoginOtpDto : CIBOISDKBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber otp:(NSString *)otp appId:(NSString * _Nullable)appId __attribute__((swift_name("init(phoneNumber:otp:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKVerifyPhoneLoginOtpDtoCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKVerifyPhoneLoginOtpDto *)doCopyPhoneNumber:(NSString *)phoneNumber otp:(NSString *)otp appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(phoneNumber:otp:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="otp")
*/
@property (readonly) NSString *otp __attribute__((swift_name("otp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyPhoneLoginOtpDto.Companion")))
@interface CIBOISDKVerifyPhoneLoginOtpDtoCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKVerifyPhoneLoginOtpDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyPhoneOtpDto")))
@interface CIBOISDKVerifyPhoneOtpDto : CIBOISDKBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber otp:(NSString *)otp appId:(NSString * _Nullable)appId __attribute__((swift_name("init(phoneNumber:otp:appId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKVerifyPhoneOtpDtoCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKVerifyPhoneOtpDto *)doCopyPhoneNumber:(NSString *)phoneNumber otp:(NSString *)otp appId:(NSString * _Nullable)appId __attribute__((swift_name("doCopy(phoneNumber:otp:appId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appId")
*/
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="otp")
*/
@property (readonly) NSString *otp __attribute__((swift_name("otp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyPhoneOtpDto.Companion")))
@interface CIBOISDKVerifyPhoneOtpDtoCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKVerifyPhoneOtpDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBHttpClient")))
@interface CIBOISDKCIBHttpClient : CIBOISDKBase
- (instancetype)initWithConfig:(CIBOISDKCIBOneIdConfig *)config tokenStore:(id<CIBOISDKTokenStore>)tokenStore customHttpClient:(CIBOISDKKtor_client_coreHttpClient * _Nullable)customHttpClient __attribute__((swift_name("init(config:tokenStore:customHttpClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestMethod:(CIBOISDKKtor_httpHttpMethod *)method path:(NSString *)path body:(id _Nullable)body requiresAuth:(BOOL)requiresAuth contentType:(CIBOISDKKtor_httpContentType *)contentType completionHandler:(void (^)(CIBOISDKCIBResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(method:path:body:requiresAuth:contentType:completionHandler:)")));
@property (readonly) CIBOISDKCIBOneIdConfig *config __attribute__((swift_name("config")));
@property (readonly) CIBOISDKKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@property (readonly) CIBOISDKKtor_client_coreHttpClient *rawClient __attribute__((swift_name("rawClient")));
@property (readonly) CIBOISDKTokenCoordinator *tokenCoordinator __attribute__((swift_name("tokenCoordinator")));
@property (readonly) id<CIBOISDKTokenStore> tokenStore __attribute__((swift_name("tokenStore")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBOneIdConfig")))
@interface CIBOISDKCIBOneIdConfig : CIBOISDKBase
- (instancetype)initWithTenantId:(NSString *)tenantId appId:(NSString * _Nullable)appId clientSecret:(NSString * _Nullable)clientSecret appName:(NSString * _Nullable)appName __attribute__((swift_name("init(tenantId:appId:clientSecret:appName:)"))) __attribute__((objc_designated_initializer));
- (CIBOISDKCIBOneIdConfig *)doCopyTenantId:(NSString *)tenantId appId:(NSString * _Nullable)appId clientSecret:(NSString * _Nullable)clientSecret appName:(NSString * _Nullable)appName __attribute__((swift_name("doCopy(tenantId:appId:clientSecret:appName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));
@property (readonly) NSString * _Nullable appName __attribute__((swift_name("appName")));
@property (readonly) NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property (readonly) NSString *tenantId __attribute__((swift_name("tenantId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwtUtils")))
@interface CIBOISDKJwtUtils : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jwtUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKJwtUtils *shared __attribute__((swift_name("shared")));
- (CIBOISDKLong * _Nullable)getExpirationEpochSecondsJwtToken:(NSString *)jwtToken __attribute__((swift_name("getExpirationEpochSeconds(jwtToken:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenCoordinator")))
@interface CIBOISDKTokenCoordinator : CIBOISDKBase
- (instancetype)initWithConfig:(CIBOISDKCIBOneIdConfig *)config tokenStore:(id<CIBOISDKTokenStore>)tokenStore json:(CIBOISDKKotlinx_serialization_jsonJson *)json __attribute__((swift_name("init(config:tokenStore:json:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getValidAccessTokenRawClient:(CIBOISDKKtor_client_coreHttpClient *)rawClient completionHandler:(void (^)(CIBOISDKCIBResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getValidAccessToken(rawClient:completionHandler:)")));
- (BOOL)isTokenExpiringSoonAccessToken:(NSString *)accessToken thresholdSeconds:(int64_t)thresholdSeconds __attribute__((swift_name("isTokenExpiringSoon(accessToken:thresholdSeconds:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeSocialAuthBridge")))
@interface CIBOISDKNativeSocialAuthBridge : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nativeSocialAuthBridge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKNativeSocialAuthBridge *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)launchAppleSignInLauncher:(CIBOISDKSocialAuthLauncher *)launcher completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKAppleCredentials *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("launchAppleSignIn(launcher:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)launchFacebookSignInLauncher:(CIBOISDKSocialAuthLauncher *)launcher permissions:(NSArray<NSString *> *)permissions completionHandler:(void (^)(CIBOISDKCIBResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("launchFacebookSignIn(launcher:permissions:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)launchGoogleSignInLauncher:(CIBOISDKSocialAuthLauncher *)launcher serverClientId:(NSString *)serverClientId completionHandler:(void (^)(CIBOISDKCIBResult<CIBOISDKGoogleCredentials *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("launchGoogleSignIn(launcher:serverClientId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialAuthLauncher")))
@interface CIBOISDKSocialAuthLauncher : CIBOISDKBase
- (instancetype)initWithViewController:(UIViewController *)viewController __attribute__((swift_name("init(viewController:)"))) __attribute__((objc_designated_initializer));
@property (readonly) UIViewController *viewController __attribute__((swift_name("viewController")));
@end

__attribute__((swift_name("TokenStore")))
@protocol CIBOISDKTokenStore
@required
- (void)clearTokens __attribute__((swift_name("clearTokens()")));
- (NSString * _Nullable)getAccessToken __attribute__((swift_name("getAccessToken()")));
- (NSString * _Nullable)getRefreshToken __attribute__((swift_name("getRefreshToken()")));
- (void)saveTokensAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("saveTokens(accessToken:refreshToken:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTokenStore")))
@interface CIBOISDKPlatformTokenStore : CIBOISDKBase <CIBOISDKTokenStore>
- (instancetype)initWithContext:(id _Nullable)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKPlatformTokenStoreCompanion *companion __attribute__((swift_name("companion")));
- (void)clearTokens __attribute__((swift_name("clearTokens()")));
- (NSString * _Nullable)getAccessToken __attribute__((swift_name("getAccessToken()")));
- (NSString * _Nullable)getRefreshToken __attribute__((swift_name("getRefreshToken()")));
- (void)saveTokensAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("saveTokens(accessToken:refreshToken:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTokenStore.Companion")))
@interface CIBOISDKPlatformTokenStoreCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKPlatformTokenStoreCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBOneIdConfigKt")))
@interface CIBOISDKCIBOneIdConfigKt : CIBOISDKBase
@property (class, readonly) NSString *CIB_BASE_URL __attribute__((swift_name("CIB_BASE_URL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CIBPlatformConfigKt")))
@interface CIBOISDKCIBPlatformConfigKt : CIBOISDKBase
+ (CIBOISDKCIBOneIdConfig *)loadPlatformConfigContext:(id _Nullable)context __attribute__((swift_name("loadPlatformConfig(context:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CIBOISDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CIBOISDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol CIBOISDKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface CIBOISDKKtor_client_coreHttpClient : CIBOISDKBase <CIBOISDKKotlinx_coroutines_coreCoroutineScope, CIBOISDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<CIBOISDKKtor_client_coreHttpClientEngine>)engine userConfig:(CIBOISDKKtor_client_coreHttpClientConfig<CIBOISDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (CIBOISDKKtor_client_coreHttpClient *)configBlock:(void (^)(CIBOISDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<CIBOISDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CIBOISDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<CIBOISDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<CIBOISDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) CIBOISDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) CIBOISDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) CIBOISDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) CIBOISDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) CIBOISDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) CIBOISDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface CIBOISDKKotlinThrowable : CIBOISDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (CIBOISDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CIBOISDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface CIBOISDKKotlinException : CIBOISDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface CIBOISDKKotlinRuntimeException : CIBOISDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CIBOISDKKotlinIllegalStateException : CIBOISDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface CIBOISDKKotlinCancellationException : CIBOISDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CIBOISDKKotlinUnit : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CIBOISDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CIBOISDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CIBOISDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CIBOISDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CIBOISDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CIBOISDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CIBOISDKKotlinx_serialization_coreKSerializer <CIBOISDKKotlinx_serialization_coreSerializationStrategy, CIBOISDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CIBOISDKKotlinNothing : CIBOISDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface CIBOISDKKtor_httpHttpMethod : CIBOISDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface CIBOISDKKtor_httpHeaderValueWithParameters : CIBOISDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CIBOISDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<CIBOISDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface CIBOISDKKtor_httpContentType : CIBOISDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CIBOISDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CIBOISDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(CIBOISDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CIBOISDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CIBOISDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol CIBOISDKKotlinx_serialization_coreSerialFormat
@required
@property (readonly) CIBOISDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol CIBOISDKKotlinx_serialization_coreStringFormat <CIBOISDKKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface CIBOISDKKotlinx_serialization_jsonJson : CIBOISDKBase <CIBOISDKKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) CIBOISDKKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(CIBOISDKKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (CIBOISDKKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (CIBOISDKKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) CIBOISDKKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) CIBOISDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CIBOISDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CIBOISDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CIBOISDKKotlinCoroutineContextElement> _Nullable)getKey:(id<CIBOISDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CIBOISDKKotlinCoroutineContext>)minusKeyKey:(id<CIBOISDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CIBOISDKKotlinCoroutineContext>)plusContext:(id<CIBOISDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol CIBOISDKKtor_client_coreHttpClientEngine <CIBOISDKKotlinx_coroutines_coreCoroutineScope, CIBOISDKKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(CIBOISDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(CIBOISDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(CIBOISDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) CIBOISDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<CIBOISDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface CIBOISDKKtor_client_coreHttpClientEngineConfig : CIBOISDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property CIBOISDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface CIBOISDKKtor_client_coreHttpClientConfig<T> : CIBOISDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CIBOISDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(CIBOISDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<CIBOISDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(CIBOISDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(CIBOISDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol CIBOISDKKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol CIBOISDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(CIBOISDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<CIBOISDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface CIBOISDKKtor_eventsEvents : CIBOISDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(CIBOISDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<CIBOISDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(CIBOISDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(CIBOISDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface CIBOISDKKtor_utilsPipeline<TSubject, TContext> : CIBOISDKBase
- (instancetype)initWithPhases:(CIBOISDKKotlinArray<CIBOISDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CIBOISDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CIBOISDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(CIBOISDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(CIBOISDKKtor_utilsPipelinePhase *)reference phase:(CIBOISDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(CIBOISDKKtor_utilsPipelinePhase *)reference phase:(CIBOISDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(CIBOISDKKtor_utilsPipelinePhase *)phase block:(id<CIBOISDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<CIBOISDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(CIBOISDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(CIBOISDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(CIBOISDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(CIBOISDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CIBOISDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<CIBOISDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface CIBOISDKKtor_client_coreHttpReceivePipeline : CIBOISDKKtor_utilsPipeline<CIBOISDKKtor_client_coreHttpResponse *, CIBOISDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CIBOISDKKotlinArray<CIBOISDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CIBOISDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CIBOISDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface CIBOISDKKtor_client_coreHttpRequestPipeline : CIBOISDKKtor_utilsPipeline<id, CIBOISDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CIBOISDKKotlinArray<CIBOISDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CIBOISDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CIBOISDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface CIBOISDKKtor_client_coreHttpResponsePipeline : CIBOISDKKtor_utilsPipeline<CIBOISDKKtor_client_coreHttpResponseContainer *, CIBOISDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CIBOISDKKotlinArray<CIBOISDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CIBOISDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CIBOISDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface CIBOISDKKtor_client_coreHttpSendPipeline : CIBOISDKKtor_utilsPipeline<id, CIBOISDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CIBOISDKKotlinArray<CIBOISDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CIBOISDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CIBOISDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CIBOISDKKotlinArray<T> : CIBOISDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CIBOISDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CIBOISDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CIBOISDKKotlinx_serialization_coreEncoder
@required
- (id<CIBOISDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CIBOISDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CIBOISDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CIBOISDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CIBOISDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CIBOISDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CIBOISDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CIBOISDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CIBOISDKKotlinx_serialization_coreDecoder
@required
- (id<CIBOISDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CIBOISDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (CIBOISDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CIBOISDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface CIBOISDKKtor_httpHttpMethodCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (CIBOISDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<CIBOISDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface CIBOISDKKtor_httpHeaderValueParam : CIBOISDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (CIBOISDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface CIBOISDKKtor_httpHeaderValueWithParametersCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<CIBOISDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface CIBOISDKKtor_httpContentTypeCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (CIBOISDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CIBOISDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CIBOISDKKotlinx_serialization_coreSerializersModule : CIBOISDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<CIBOISDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CIBOISDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CIBOISDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CIBOISDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CIBOISDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CIBOISDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CIBOISDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface CIBOISDKKotlinx_serialization_jsonJsonDefault : CIBOISDKKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface CIBOISDKKotlinx_serialization_jsonJsonElement : CIBOISDKBase
@property (class, readonly, getter=companion) CIBOISDKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface CIBOISDKKotlinx_serialization_jsonJsonConfiguration : CIBOISDKBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<CIBOISDKKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CIBOISDKKotlinCoroutineContextElement <CIBOISDKKotlinCoroutineContext>
@required
@property (readonly) id<CIBOISDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CIBOISDKKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface CIBOISDKKtor_client_coreHttpRequestData : CIBOISDKBase
- (instancetype)initWithUrl:(CIBOISDKKtor_httpUrl *)url method:(CIBOISDKKtor_httpHttpMethod *)method headers:(id<CIBOISDKKtor_httpHeaders>)headers body:(CIBOISDKKtor_httpOutgoingContent *)body executionContext:(id<CIBOISDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<CIBOISDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<CIBOISDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CIBOISDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CIBOISDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<CIBOISDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<CIBOISDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CIBOISDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface CIBOISDKKtor_client_coreHttpResponseData : CIBOISDKBase
- (instancetype)initWithStatusCode:(CIBOISDKKtor_httpHttpStatusCode *)statusCode requestTime:(CIBOISDKKtor_utilsGMTDate *)requestTime headers:(id<CIBOISDKKtor_httpHeaders>)headers version:(CIBOISDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<CIBOISDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<CIBOISDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<CIBOISDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CIBOISDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CIBOISDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) CIBOISDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CIBOISDKKotlinAbstractCoroutineContextElement : CIBOISDKBase <CIBOISDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CIBOISDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CIBOISDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CIBOISDKKotlinContinuationInterceptor <CIBOISDKKotlinCoroutineContextElement>
@required
- (id<CIBOISDKKotlinContinuation>)interceptContinuationContinuation:(id<CIBOISDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CIBOISDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher : CIBOISDKKotlinAbstractCoroutineContextElement <CIBOISDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CIBOISDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<CIBOISDKKotlinCoroutineContext>)context block:(id<CIBOISDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<CIBOISDKKotlinCoroutineContext>)context block:(id<CIBOISDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CIBOISDKKotlinContinuation>)interceptContinuationContinuation:(id<CIBOISDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CIBOISDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<CIBOISDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface CIBOISDKKtor_client_coreProxyConfig : CIBOISDKBase
- (instancetype)initWithUrl:(CIBOISDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CIBOISDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol CIBOISDKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(CIBOISDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CIBOISDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface CIBOISDKKtor_utilsAttributeKey<T> : CIBOISDKBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(CIBOISDKKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (CIBOISDKKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(CIBOISDKKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface CIBOISDKKtor_eventsEventDefinition<T> : CIBOISDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol CIBOISDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface CIBOISDKKtor_utilsPipelinePhase : CIBOISDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol CIBOISDKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol CIBOISDKKotlinSuspendFunction2 <CIBOISDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface CIBOISDKKtor_client_coreHttpReceivePipelinePhases : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol CIBOISDKKtor_httpHttpMessage
@required
@property (readonly) id<CIBOISDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface CIBOISDKKtor_client_coreHttpResponse : CIBOISDKBase <CIBOISDKKtor_httpHttpMessage, CIBOISDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CIBOISDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<CIBOISDKKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) CIBOISDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CIBOISDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) CIBOISDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface CIBOISDKKtor_client_coreHttpRequestPipelinePhases : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol CIBOISDKKtor_httpHttpMessageBuilder
@required
@property (readonly) CIBOISDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface CIBOISDKKtor_client_coreHttpRequestBuilder : CIBOISDKBase <CIBOISDKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CIBOISDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<CIBOISDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<CIBOISDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<CIBOISDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (CIBOISDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(CIBOISDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (CIBOISDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(CIBOISDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(CIBOISDKKtor_httpURLBuilder *, CIBOISDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<CIBOISDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property CIBOISDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<CIBOISDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) CIBOISDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property CIBOISDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CIBOISDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface CIBOISDKKtor_client_coreHttpResponsePipelinePhases : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface CIBOISDKKtor_client_coreHttpResponseContainer : CIBOISDKBase
- (instancetype)initWithExpectedType:(CIBOISDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (CIBOISDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(CIBOISDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CIBOISDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface CIBOISDKKtor_client_coreHttpClientCall : CIBOISDKBase <CIBOISDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(CIBOISDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(CIBOISDKKtor_client_coreHttpClient *)client requestData:(CIBOISDKKtor_client_coreHttpRequestData *)requestData responseData:(CIBOISDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(CIBOISDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(CIBOISDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<CIBOISDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<CIBOISDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CIBOISDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<CIBOISDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<CIBOISDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property CIBOISDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface CIBOISDKKtor_client_coreHttpSendPipelinePhases : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CIBOISDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CIBOISDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CIBOISDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CIBOISDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CIBOISDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol CIBOISDKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CIBOISDKKotlinx_serialization_coreSerialKind : CIBOISDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CIBOISDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CIBOISDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CIBOISDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CIBOISDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CIBOISDKKotlinKClass>)kClass provider:(id<CIBOISDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CIBOISDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CIBOISDKKotlinKClass>)kClass serializer:(id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CIBOISDKKotlinKClass>)baseClass actualClass:(id<CIBOISDKKotlinKClass>)actualClass actualSerializer:(id<CIBOISDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CIBOISDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<CIBOISDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<CIBOISDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<CIBOISDKKotlinKClass>)baseClass defaultSerializerProvider:(id<CIBOISDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CIBOISDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CIBOISDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol CIBOISDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol CIBOISDKKotlinKClass <CIBOISDKKotlinKDeclarationContainer, CIBOISDKKotlinKAnnotatedElement, CIBOISDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface CIBOISDKKotlinx_serialization_jsonJsonElementCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol CIBOISDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface CIBOISDKKotlinEnum<E> : CIBOISDKBase <CIBOISDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode : CIBOISDKKotlinEnum<CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (CIBOISDKKotlinArray<CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CIBOISDKKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol CIBOISDKKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<CIBOISDKKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface CIBOISDKKtor_httpUrl : CIBOISDKBase
@property (class, readonly, getter=companion) CIBOISDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<CIBOISDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) CIBOISDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) CIBOISDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol CIBOISDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CIBOISDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol CIBOISDKKtor_httpHeaders <CIBOISDKKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface CIBOISDKKtor_httpOutgoingContent : CIBOISDKBase
- (id _Nullable)getPropertyKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(CIBOISDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<CIBOISDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) CIBOISDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) CIBOISDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<CIBOISDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol CIBOISDKKotlinx_coroutines_coreJob <CIBOISDKKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<CIBOISDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<CIBOISDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(CIBOISDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (CIBOISDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CIBOISDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(CIBOISDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<CIBOISDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(CIBOISDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<CIBOISDKKotlinx_coroutines_coreJob>)plusOther_:(id<CIBOISDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CIBOISDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<CIBOISDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<CIBOISDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface CIBOISDKKtor_httpHttpStatusCode : CIBOISDKBase <CIBOISDKKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CIBOISDKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (CIBOISDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (CIBOISDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface CIBOISDKKtor_utilsGMTDate : CIBOISDKBase <CIBOISDKKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CIBOISDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CIBOISDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CIBOISDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (CIBOISDKKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (CIBOISDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CIBOISDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CIBOISDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) CIBOISDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) CIBOISDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface CIBOISDKKtor_httpHttpProtocolVersion : CIBOISDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol CIBOISDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CIBOISDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface CIBOISDKKotlinAbstractCoroutineContextKey<B, E> : CIBOISDKBase <CIBOISDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<CIBOISDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<CIBOISDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface CIBOISDKKotlinx_coroutines_coreCoroutineDispatcherKey : CIBOISDKKotlinAbstractCoroutineContextKey<id<CIBOISDKKotlinContinuationInterceptor>, CIBOISDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<CIBOISDKKotlinCoroutineContextKey>)baseKey safeCast:(id<CIBOISDKKotlinCoroutineContextElement> _Nullable (^)(id<CIBOISDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CIBOISDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface CIBOISDKKtor_utilsTypeInfo : CIBOISDKBase
- (instancetype)initWithType:(id<CIBOISDKKotlinKClass>)type kotlinType:(id<CIBOISDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<CIBOISDKKotlinKClass>)type reifiedType:(id<CIBOISDKKotlinKType>)reifiedType kotlinType:(id<CIBOISDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CIBOISDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<CIBOISDKKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol CIBOISDKKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(CIBOISDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(CIBOISDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) CIBOISDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<CIBOISDKKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol CIBOISDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CIBOISDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CIBOISDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CIBOISDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CIBOISDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface CIBOISDKKtor_utilsStringValuesBuilderImpl : CIBOISDKBase <CIBOISDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CIBOISDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CIBOISDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CIBOISDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CIBOISDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) CIBOISDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface CIBOISDKKtor_httpHeadersBuilder : CIBOISDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CIBOISDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface CIBOISDKKtor_client_coreHttpRequestBuilderCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface CIBOISDKKtor_httpURLBuilder : CIBOISDKBase
- (instancetype)initWithProtocol:(CIBOISDKKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<CIBOISDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<CIBOISDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<CIBOISDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property CIBOISDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property CIBOISDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface CIBOISDKKtor_client_coreHttpClientCallCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol CIBOISDKKtor_client_coreHttpRequest <CIBOISDKKtor_httpHttpMessage, CIBOISDKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<CIBOISDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CIBOISDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) CIBOISDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) CIBOISDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CIBOISDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CIBOISDKKotlinEnumCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface CIBOISDKKtor_httpUrlCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol CIBOISDKKtor_httpParameters <CIBOISDKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface CIBOISDKKtor_httpURLProtocol : CIBOISDKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol CIBOISDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol CIBOISDKKotlinx_coroutines_coreChildHandle <CIBOISDKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(CIBOISDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<CIBOISDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol CIBOISDKKotlinx_coroutines_coreChildJob <CIBOISDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<CIBOISDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol CIBOISDKKotlinSequence
@required
- (id<CIBOISDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol CIBOISDKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) CIBOISDKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<CIBOISDKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(CIBOISDKKotlinThrowable *, id _Nullable, id<CIBOISDKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<CIBOISDKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol CIBOISDKKotlinx_coroutines_coreSelectClause0 <CIBOISDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface CIBOISDKKtor_httpHttpStatusCodeCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (CIBOISDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) CIBOISDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<CIBOISDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface CIBOISDKKtor_utilsWeekDay : CIBOISDKKotlinEnum<CIBOISDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CIBOISDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) CIBOISDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) CIBOISDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) CIBOISDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) CIBOISDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) CIBOISDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) CIBOISDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (CIBOISDKKotlinArray<CIBOISDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CIBOISDKKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface CIBOISDKKtor_utilsMonth : CIBOISDKKotlinEnum<CIBOISDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CIBOISDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) CIBOISDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (CIBOISDKKotlinArray<CIBOISDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CIBOISDKKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface CIBOISDKKtor_utilsGMTDateCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<CIBOISDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) CIBOISDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface CIBOISDKKtor_httpHttpProtocolVersionCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (CIBOISDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (CIBOISDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CIBOISDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) CIBOISDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) CIBOISDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) CIBOISDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) CIBOISDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol CIBOISDKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<CIBOISDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<CIBOISDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol CIBOISDKKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol CIBOISDKKotlinx_io_coreRawSource <CIBOISDKKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(CIBOISDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol CIBOISDKKotlinx_io_coreSource <CIBOISDKKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<CIBOISDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(CIBOISDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<CIBOISDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<CIBOISDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) CIBOISDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface CIBOISDKKtor_httpURLBuilderCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol CIBOISDKKtor_httpParametersBuilder <CIBOISDKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface CIBOISDKKtor_httpURLProtocolCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (CIBOISDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) CIBOISDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) CIBOISDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) CIBOISDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) CIBOISDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) CIBOISDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, CIBOISDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol CIBOISDKKotlinx_coroutines_coreParentJob <CIBOISDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (CIBOISDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol CIBOISDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<CIBOISDKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<CIBOISDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface CIBOISDKKtor_utilsWeekDayCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (CIBOISDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CIBOISDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface CIBOISDKKtor_utilsMonthCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (CIBOISDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CIBOISDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface CIBOISDKKotlinKTypeProjection : CIBOISDKBase
- (instancetype)initWithVariance:(CIBOISDKKotlinKVariance * _Nullable)variance type:(id<CIBOISDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CIBOISDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (CIBOISDKKotlinKTypeProjection *)doCopyVariance:(CIBOISDKKotlinKVariance * _Nullable)variance type:(id<CIBOISDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CIBOISDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) CIBOISDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CIBOISDKKotlinByteArray : CIBOISDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CIBOISDKByte *(^)(CIBOISDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CIBOISDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol CIBOISDKKotlinx_io_coreRawSink <CIBOISDKKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(CIBOISDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol CIBOISDKKotlinx_io_coreSink <CIBOISDKKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<CIBOISDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<CIBOISDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(CIBOISDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) CIBOISDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface CIBOISDKKotlinx_io_coreBuffer : CIBOISDKBase <CIBOISDKKotlinx_io_coreSource, CIBOISDKKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (CIBOISDKKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(CIBOISDKKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<CIBOISDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(CIBOISDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(CIBOISDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<CIBOISDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<CIBOISDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<CIBOISDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(CIBOISDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<CIBOISDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(CIBOISDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) CIBOISDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface CIBOISDKKotlinKVariance : CIBOISDKKotlinEnum<CIBOISDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CIBOISDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) CIBOISDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) CIBOISDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (CIBOISDKKotlinArray<CIBOISDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CIBOISDKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface CIBOISDKKotlinKTypeProjectionCompanion : CIBOISDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CIBOISDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CIBOISDKKotlinKTypeProjection *)contravariantType:(id<CIBOISDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CIBOISDKKotlinKTypeProjection *)covariantType:(id<CIBOISDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CIBOISDKKotlinKTypeProjection *)invariantType:(id<CIBOISDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) CIBOISDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface CIBOISDKKotlinByteIterator : CIBOISDKBase <CIBOISDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CIBOISDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
