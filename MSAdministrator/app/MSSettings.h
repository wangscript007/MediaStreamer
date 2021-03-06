/*******************************************************
 *
 *	@author	: Turgut Mehdiyev
 *	@date	: 9/10/2012
 *	
 *	Copyright (c) Idrak Technology Transfer 2012
 *
 ******************************************************/

#ifndef MS_ADM_SETTINGS_H
#define MS_ADM_SETTINGS_H

#include <utils/Settings.h>

using namespace MSCommon;

namespace MSAdministrator {

    /*!
     * \brief A Singleton instance to store application related settings
     * \todo Should work on singleton instance destructor.
     *       For now we rely on OS to delete it.
     */
    class MSSettings : public Settings {

    public:

        /*!
         * \brief Class destructor
         */
        ~MSSettings( void );

        /*!
         * \brief Initialize application related settings
         */
        void init( void );

        /*!
         * \brief Get singleton instance
         * \return
         */
        static MSSettings* getInstance( void );

    private:

        /*!
         * \brief Holds singleton instance
         */
        static MSSettings* _instance;

    };

}


#endif // MS_ADM_SETTINGS_H
