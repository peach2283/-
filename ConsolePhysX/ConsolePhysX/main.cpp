#include <stdio.h>
#include "Input.h"
#include "Timer.h"

#if defined(_WIN32) && !defined(_WIN64)

    #if defined(_DEBUG)

        ////////////////////////////x86-����� ��� ���̺귯�� /////////////////////////////
        #include <PxPhysicsAPI.h>

        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/debug/PsFastXmlDEBUG_x86.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/debug/PxFoundationDEBUG_x86.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/debug/PxPvdSDKDEBUG_x86.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/debug/PxTaskDEBUG_x86.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/LowLevelDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/LowLevelAABBDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/LowLevelClothDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/LowLevelDynamicsDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/LowLevelParticlesDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/PhysX3ExtensionsDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/PhysX3VehicleDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/SceneQueryDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/SimulationControllerDEBUG.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/PhysX3CharacterKinematicDEBUG_x86.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/PhysX3CommonDEBUG_x86.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/PhysX3CookingDEBUG_x86.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/debug/PhysX3DEBUG_x86.lib")

    #else

        ////////////////////////////x86-������ ��� ���̺귯�� /////////////////////////////
        #define NDEBUG
        #include <PxPhysicsAPI.h>

        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/release/PsFastXml_x86.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/release/PxFoundation_x86.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/release/PxPvdSDK_x86.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win32/release/PxTask_x86.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/LowLevel.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/LowLevelAABB.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/LowLevelCloth.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/LowLevelDynamics.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/LowLevelParticles.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/PhysX3Extensions.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/PhysX3Vehicle.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/SceneQuery.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/SimulationController.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/PhysX3CharacterKinematic_x86.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/PhysX3Common_x86.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/PhysX3Cooking_x86.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win32/release/PhysX3_x86.lib")

    #endif

#elif defined(_WIN32) && defined(_WIN64)

    #if defined(_DEBUG )

        ////////////////////////////x64-����� ��� ���̺귯�� /////////////////////////////
        #include <PxPhysicsAPI.h>

        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/debug/PsFastXmlDEBUG_x64.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/debug/PxFoundationDEBUG_x64.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/debug/PxPvdSDKDEBUG_x64.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/debug/PxTaskDEBUG_x64.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/LowLevelDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/LowLevelAABBDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/LowLevelClothDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/LowLevelDynamicsDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/LowLevelParticlesDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/PhysX3ExtensionsDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/PhysX3VehicleDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/SceneQueryDEBUG.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/SimulationControllerDEBUG.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/PhysX3CharacterKinematicDEBUG_x64.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/PhysX3CommonDEBUG_x64.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/PhysX3CookingDEBUG_x64.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/debug/PhysX3DEBUG_x64.lib")

    #else

        ////////////////////////////x64-������ ��� ���̺귯�� /////////////////////////////
        #define NDEBUG
        #include <PxPhysicsAPI.h>

        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/release/PsFastXml_x64.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/release/PxFoundation_x64.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/release/PxPvdSDK_x64.lib")
        #pragma comment(lib,"PhysX/PxShared/lib/vc15win64/release/PxTask_x64.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/LowLevel.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/LowLevelAABB.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/LowLevelCloth.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/LowLevelDynamics.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/LowLevelParticles.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/PhysX3Extensions.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/PhysX3Vehicle.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/SceneQuery.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/SimulationController.lib")

        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/PhysX3CharacterKinematic_x64.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/PhysX3Common_x64.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/PhysX3Cooking_x64.lib")
        #pragma comment(lib,"PhysX/PhysX_3.4/lib/vc15win64/release/PhysX3_x64.lib")

    #endif

#endif

using namespace physx;

int main()
{
    Input::init();
    Timer::init();
  
    //////////////////////////////////////������ �ʱ�ȭ�ϱ�//////////////////////////////////////////
    PxDefaultAllocator		Allocator;
    PxDefaultErrorCallback	ErrorCallback;

    PxFoundation*            Foundation = NULL;
    PxPvd*                   Pvd = NULL;
    PxPhysics*	             Physics = NULL;
    PxDefaultCpuDispatcher*	 Dispatcher = NULL;
    PxScene*				 Scene = NULL;
    PxMaterial*				 Material = NULL;

    ///////////////////////////////////������ Foundation ����////////////////////////////////////////
    Foundation = PxCreateFoundation(PX_FOUNDATION_VERSION, Allocator, ErrorCallback);

    if (Foundation == NULL)
    {
        printf("������ �Ŀ�̼� ���� ����\n");
        return -1;
    }

    ///////////////////////////////PVD(PhysX Visual Debuger ���� ��ü ����/////////////////////////
    Pvd = PxCreatePvd(*Foundation);
    PxPvdTransport* transport = PxDefaultPvdSocketTransportCreate("localhost", 5425, 10);

    if (transport == NULL)
    {
        printf("PVD(������ ���־� �����) ��Ʈ��ũ ���� ��ü ����(���ɻ���)����\n");
        return -1;
    }

    if (Pvd->connect(*transport, PxPvdInstrumentationFlag::eDEBUG) != true)
    {
        printf("PVD(������ ���־� �����)�� ������ �� ����\n");
    }
    else {
        printf("PVD(������ ���־� �����)�� �����Ͽ���\n");
    }

    /////////////////////////////������ �����ùķ��̼� ��ü ���� ////////////////////////////////
    Physics = PxCreatePhysics(PX_PHYSICS_VERSION, *Foundation, PxTolerancesScale(), true, Pvd);

    if (Physics == NULL)
    {
        printf("������ü(��������) ���� ����\n");
        return -1;
    }

    ///////////////////////////������ �� ����/////////////////////////////////////////////////
    PxSceneDesc sceneDesc(Physics->getTolerancesScale());
    sceneDesc.gravity = PxVec3(0.0f, -9.81f, 0.0f);
    Dispatcher        = PxDefaultCpuDispatcherCreate(2);
    sceneDesc.cpuDispatcher = Dispatcher;
    sceneDesc.filterShader  = physx::PxDefaultSimulationFilterShader;

    Scene = Physics->createScene(sceneDesc);

    if (Scene == NULL)
    {
        printf("��(Scene) ���� ����\n");
        return -1;
    }

    ///////////////////////PVD�� ����ü��..�߰������ϱ�///////////////////////////////////////
    PxPvdSceneClient* pvdClient = Scene->getScenePvdClient();
    if (pvdClient)
    {
        pvdClient->setScenePvdFlag( PxPvdSceneFlag::eTRANSMIT_CONSTRAINTS, true);
        pvdClient->setScenePvdFlag( PxPvdSceneFlag::eTRANSMIT_CONTACTS, true);
        pvdClient->setScenePvdFlag( PxPvdSceneFlag::eTRANSMIT_SCENEQUERIES, true);
    }

    //////////////////////�浹ü..���� ����///////////////////////////////////////////////////
    Material = Physics->createMaterial(0.5f, 0.5f, 0.6f);

    //////////////////////�׶��� ������ ��..���� �߰��Ѵ�///////////////////////////////////
    PxRigidStatic* groundPlane = PxCreatePlane(*Physics, PxPlane(0, 1, 0, 0), *Material);
    Scene->addActor(*groundPlane);

    ///////////////////////////////////////�ڽ�(����) �ױ�/////////////////////////////////////
    for (int n = 0; n < 5; n++)
    {
        PxTransform trans(PxVec3(0, 0, -n*1.0f));
        PxShape* shape = Physics->createShape(PxBoxGeometry(2, 2, 2), *Material);

        for (PxU32 i = 0; i< 10; i++)
        {
            for (PxU32 j = 0; j<10 - i; j++)
            {
                PxTransform localTm(PxVec3(PxReal(j * 2) - PxReal(10 - i), PxReal(i * 2 + 1), 0) * 2);
                PxRigidDynamic* body = Physics->createRigidDynamic(trans.transform(localTm));
                body->attachShape(*shape);
                PxRigidBodyExt::updateMassAndInertia(*body, 10.0f);
                Scene->addActor(*body);
            }
        }
        shape->release();
    } 

    while (true)
    {
        Timer::update();
        Input::update();

        if (Input::getKeyDown(VK_SPACE) == true)
        {
            /////////////////////[�����̴� ��ü(����) �߰��ϱ�]///////////////
            PxTransform trans(PxVec3(0, 40, 100));
            PxSphereGeometry sphere(10);
            PxVec3 velocity(0, -50, -100);

            PxRigidDynamic* dynamic = PxCreateDynamic(*Physics, trans, sphere, *Material, 10.0f);
            dynamic->setAngularDamping(0.5f);
            dynamic->setLinearVelocity(velocity);
            Scene->addActor(*dynamic);
        }

        Scene->simulate(Timer::deltaTime);
        Scene->fetchResults(true);
    }

    ////////////������ �����ϱ�//////////
    Material->release();
    Scene->release();
    Dispatcher->release();
    Physics->release();
    transport->release();
    Pvd->release();
    transport->release();
    Foundation->release();

    Input::exit();
    Timer::exit();

    return 0;
}