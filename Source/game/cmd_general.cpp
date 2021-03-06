// Aratılır


ACMD(do_click_safebox)


// Eklenir:



#ifdef ENABLE_GAMEMASTER_RESTRICTION
    if (!test_server && ch->IsGM())
    {
        std::unique_ptr<SQLMsg> pMsg(DBManager::instance().DirectQuery("SELECT * FROM gamemaster_restriction"));
        SQLResult * pRes = pMsg->Get();
        if (pRes->uiNumRows)
        {
            MYSQL_ROW row;
            while ((row = mysql_fetch_row(pRes->pSQLResult)))
            {
                DWORD datos = 0;
                str_to_number(datos, row[0]);
                if (ch->GetPlayerID()==datos)
                {
                    ch->ChatPacket(CHAT_TYPE_INFO, "Bunu yapmak için izniniz yok");
                    return;
                }
            }
        }
    }
#endif