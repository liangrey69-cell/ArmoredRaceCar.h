#include "WeaponInventory.h"

bool UWeaponInventory::UseWeapon(EArmoredWeapon Weapon)
{
    switch (Weapon)
    {
        case EArmoredWeapon::Bullet:
            if (Bullets > 0)
            {
                Bullets--;
                return true;
            }
            break;

        case EArmoredWeapon::Rocket:
            if (Rockets > 0)
            {
                Rockets--;
                return true;
            }
            break;

        case EArmoredWeapon::ExplosiveTrap:
            if (ExplosiveTraps > 0)
            {
                ExplosiveTraps--;
                return true;
            }
            break;

        case EArmoredWeapon::Shield:
            if (bHasShield)
            {
                bHasShield = false;
                return true;
            }
            break;

        case EArmoredWeapon::Fixer:
            if (bHasFixer)
            {
                bHasFixer = false;
                return true;
            }
            break;

        case EArmoredWeapon::Nitro:
            if (bHasNitro)
            {
                bHasNitro = false;
                return true;
            }
            break;
    }

    return false;
}

int32 UWeaponInventory::GetWeaponCount(EArmoredWeapon Weapon) const
{
    switch (Weapon)
    {
        case EArmoredWeapon::Bullet:
            return Bullets;

        case EArmoredWeapon::Rocket:
            return Rockets;

        case EArmoredWeapon::ExplosiveTrap:
            return ExplosiveTraps;

        case EArmoredWeapon::Shield:
            return bHasShield ? 1 : 0;

        case EArmoredWeapon::Fixer:
            return bHasFixer ? 1 : 0;

        case EArmoredWeapon::Nitro:
            return bHasNitro ? 1 : 0;
    }

    return 0;
}
