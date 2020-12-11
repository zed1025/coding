-- What are database triggers?
-- Triggers are SQL statememts that are AUTOMATICALLY RUN when a specific table is changed

-- syntax
CREATE TRIGGER trigger_name
    trigger_time trigger_event ON table_name FOR EACH ROW
    BEGIN
    ...
    END;

-- lets see possible values for trigger_time and trigger_event
trigger_time        trigger_event
BEFORE              INSERT
AFTER               UPDATE 
                    DELETE

